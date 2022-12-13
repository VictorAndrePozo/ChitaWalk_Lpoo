IF OBJECT_ID('dbo.SALE_DETAIL', 'U') IS NOT NULL 
  DROP TABLE dbo.SALE_DETAIL 
GO
IF OBJECT_ID('dbo.SALE', 'U') IS NOT NULL
	DROP TABLE dbo.SALE
GO
IF OBJECT_ID('dbo.STORE', 'U') IS NOT NULL
	DROP TABLE dbo.STORE
GO
IF OBJECT_ID('dbo.WAREHOUSE_PRODUCT_CATEGORY', 'U') IS NOT NULL
	DROP TABLE dbo.WAREHOUSE_PRODUCT_CATEGORY
GO
IF OBJECT_ID('dbo.WAREHOUSE', 'U') IS NOT NULL
	DROP TABLE dbo.WAREHOUSE
GO
IF OBJECT_ID('dbo.PRODUCT_CATEGORY', 'U') IS NOT NULL
	DROP TABLE dbo.PRODUCT_CATEGORY
GO
IF OBJECT_ID('dbo.PREMISE', 'U') IS NOT NULL
	DROP TABLE dbo.PREMISE
GO
IF OBJECT_ID('dbo.DISTRICT', 'U') IS NOT NULL
	DROP TABLE dbo.DISTRICT
GO
IF OBJECT_ID('dbo.CUSTOMER', 'U') IS NOT NULL
	DROP TABLE dbo.CUSTOMER
GO
IF OBJECT_ID('dbo.PRODUCT', 'U') IS NOT NULL
	DROP TABLE dbo.PRODUCT
GO
IF OBJECT_ID('dbo.EMPLOYEE', 'U') IS NOT NULL
	DROP TABLE dbo.EMPLOYEE
GO
IF OBJECT_ID('dbo.SELLER_COMPANY', 'U') IS NOT NULL
	DROP TABLE dbo.SELLER_COMPANY
GO
IF OBJECT_ID('dbo.PERSON', 'U') IS NOT NULL
	DROP TABLE dbo.PERSON
GO
CREATE TABLE PERSON (
	id INT IDENTITY(1,1) NOT NULL PRIMARY KEY,
	doc_number VARCHAR(15) NOT NULL UNIQUE,
	name VARCHAR(100) NOT NULL,
	address VARCHAR(150) NULL,
	phone_number VARCHAR(50) NULL,
	email VARCHAR(150) NOT NULL UNIQUE,	
	status CHAR(1) NULL
)
GO
CREATE TABLE CUSTOMER (
	id INT NOT NULL PRIMARY KEY,
	customer_points INT NULL,
	last_name VARCHAR(100) NULL,
	gender CHAR(1) NULL,
	birthday DATE NULL,
	web_page VARCHAR(250) NULL,
	agent VARCHAR(100) NULL,
	customer_type CHAR(1) NOT NULL --'1'-Natural, '2'-Company
)
GO
ALTER TABLE CUSTOMER
ADD CONSTRAINT FK_CUSTOMER_PERSON_ID FOREIGN KEY (id)
REFERENCES PERSON(id)
ON DELETE CASCADE
GO
CREATE TABLE SELLER_COMPANY (
	id INT NOT NULL PRIMARY KEY,
	president VARCHAR(250) NOT NULL
)
GO
ALTER TABLE SELLER_COMPANY
ADD CONSTRAINT FK_SELLER_COMPANY_PERSON_ID FOREIGN KEY (id)
REFERENCES PERSON(id)
ON DELETE CASCADE
GO
CREATE TABLE EMPLOYEE (
	id INT NOT NULL PRIMARY KEY,
	last_name VARCHAR(100) NOT NULL,
	salary DECIMAL(10,2) NULL,
	store VARCHAR(250) NULL,
	username VARCHAR(100) UNIQUE NOT NULL,
	password VARCHAR(100) NOT NULL,
	gender CHAR(1) NULL,
	birthday DATE NULL,
	employee_type CHAR(1) NOT NULL, --'1'-Salesman, '2'-Supervisor, '3'-StoreManager
	quota DECIMAL(10,2) NULL,
	department VARCHAR(250) NULL,	
	goals VARCHAR(1000) NULL	
)
GO
ALTER TABLE EMPLOYEE
ADD CONSTRAINT FK_EMPLOYEE_PERSON_ID FOREIGN KEY (id)
REFERENCES PERSON(id)
ON DELETE CASCADE
GO
CREATE TABLE DISTRICT (
	id VARCHAR(6) NOT NULL PRIMARY KEY,
	name VARCHAR(150) NULL,
	province_id VARCHAR (4) NULL,
	department_id VARCHAR(2) NULL
)
GO
CREATE TABLE PREMISE (
	id INT NOT NULL PRIMARY KEY IDENTITY(1,1),
	name VARCHAR(150) NULL,
	description VARCHAR(500) NULL,
	address VARCHAR (150) NULL,
	postal_code VARCHAR(50) NULL,
	area DECIMAL(10,2) NULL,
	has_cooling_system CHAR(1) NULL,
	status CHAR(1) NULL,
	district_id VARCHAR(6) NULL
)
GO
ALTER TABLE PREMISE
ADD CONSTRAINT FK_PREMISE_DISTRICT_ID FOREIGN KEY (district_id)
REFERENCES DISTRICT(id)
ON DELETE NO ACTION
GO
CREATE TABLE STORE (
	id INT NOT NULL PRIMARY KEY,
	capacity INT NULL,
	sales_goal DECIMAL(10,2) NULL,
	store_manager_id INT NULL
)
GO
ALTER TABLE STORE
ADD CONSTRAINT FK_STORE_PREMISE_ID FOREIGN KEY (id)
REFERENCES PREMISE(id)
ON DELETE CASCADE
GO
ALTER TABLE STORE
ADD CONSTRAINT FK_STORE_SALESMAN_ID FOREIGN KEY (store_manager_id)
REFERENCES EMPLOYEE(id)
ON DELETE NO ACTION
GO
CREATE TABLE WAREHOUSE (
	id INT NOT NULL PRIMARY KEY,
	storage_capacity DECIMAL(10,2) NULL,
	sales_goal DECIMAL(10,2) NULL
)
GO
ALTER TABLE WAREHOUSE
ADD CONSTRAINT FK_WAREHOUSE_PREMISE_ID FOREIGN KEY (id)
REFERENCES PREMISE(id)
ON DELETE CASCADE
GO
CREATE TABLE PRODUCT_CATEGORY (
	id VARCHAR(6) NOT NULL PRIMARY KEY,
	name VARCHAR(250) NOT NULL
)
GO
CREATE TABLE WAREHOUSE_PRODUCT_CATEGORY (
	warehouse_id INT NOT NULL,
	product_category_id VARCHAR(6) NOT NULL
)
GO
ALTER TABLE WAREHOUSE_PRODUCT_CATEGORY
ADD CONSTRAINT PK_WAREHOUSE_PRODUCT_CATEGORY
PRIMARY KEY(warehouse_id, product_category_id)
GO
ALTER TABLE WAREHOUSE_PRODUCT_CATEGORY
ADD CONSTRAINT FK_WAREHOUSE_PRODUCT_CATEGORY_WAREHOUSE_ID FOREIGN KEY (warehouse_id)
REFERENCES WAREHOUSE(id)
ON DELETE CASCADE
GO
ALTER TABLE WAREHOUSE_PRODUCT_CATEGORY
ADD CONSTRAINT FK_WAREHOUSE_PRODUCT_CATEGORY_PRODUCT_CATEGORY_ID FOREIGN KEY (product_category_id)
REFERENCES PRODUCT_CATEGORY(id)
ON DELETE CASCADE
GO
CREATE TABLE PRODUCT(
	id INT NOT NULL PRIMARY KEY IDENTITY(1,1),
	name VARCHAR(250) NOT NULL,
	description VARCHAR(500) NOT NULL,
	price DECIMAL(10, 2) NOT NULL,
	stock INT NOT NULL,
	status CHAR(1) NULL,
	photo IMAGE NULL
)
GO
CREATE TABLE SALE(
	id INT NOT NULL PRIMARY KEY IDENTITY(1,1),
	transaction_date DATE NOT NULL,
	status CHAR(1) NULL,
	total DECIMAL(10, 2) NOT NULL,
	customer_id INT NOT NULL,
	salesman_id INT NULL,
	store_id INT NULL
)
GO
ALTER TABLE SALE
ADD CONSTRAINT FK_SALE_CUSTOMER_ID FOREIGN KEY (customer_id)
REFERENCES CUSTOMER(id)
ON DELETE CASCADE
GO
ALTER TABLE SALE
ADD CONSTRAINT FK_SALE_SALESMAN_ID FOREIGN KEY (salesman_id)
REFERENCES EMPLOYEE(id)
ON DELETE NO ACTION
GO
ALTER TABLE SALE
ADD CONSTRAINT FK_SALE_STORE_ID FOREIGN KEY (store_id)
REFERENCES STORE(id)
ON DELETE CASCADE
GO
CREATE TABLE SALE_DETAIL (
	id INT NOT NULL PRIMARY KEY IDENTITY(1,1),
	sale_id INT NOT NULL,
	product_id INT NOT NULL,
	quantity INT NULL,
	subtotal DECIMAL(10,2) NULL,
	unit_price DECIMAL(10,2) NULL
)
GO
ALTER TABLE SALE_DETAIL
ADD CONSTRAINT FK_SALE_DETAIL_SALE_ID FOREIGN KEY (sale_id)
REFERENCES SALE(id)
ON DELETE CASCADE
GO
ALTER TABLE SALE_DETAIL
ADD CONSTRAINT FK_SALE_DETAIL_PRODUCT_ID FOREIGN KEY (product_id)
REFERENCES PRODUCT(id)
GO
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150101','Lima','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150102','Ancón','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150103','Ate','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150104','Barranco','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150105','Breña','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150106','Carabayllo','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150107','Chaclacayo','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150108','Chorrillos','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150109','Cieneguilla','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150110','Comas','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150111','El Agustino','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150112','Independencia','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150113','Jesús María','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150114','La Molina','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150115','La Victoria','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150116','Lince','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150117','Los Olivos','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150118','Lurigancho','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150119','Lurin','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150120','Magdalena del Mar','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150121','Pueblo Libre','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150122','Miraflores','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150123','Pachacamac','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150124','Pucusana','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150125','Puente Piedra','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150126','Punta Hermosa','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150127','Punta Negra','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150128','Rímac','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150129','San Bartolo','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150130','San Borja','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150131','San Isidro','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150132','San Juan de Lurigancho','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150133','San Juan de Miraflores','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150134','San Luis','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150135','San Martín de Porres','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150136','San Miguel','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150137','Santa Anita','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150138','Santa María del Mar','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150139','Santa Rosa','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150140','Santiago de Surco','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150141','Surquillo','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150142','Villa El Salvador','1501','15')
INSERT INTO DISTRICT (id, name, province_id, department_id) VALUES ('150143','Villa María del Triunfo','1501','15')
GO
INSERT INTO PRODUCT_CATEGORY (id, name) VALUES('PCAF','Alimentos frescos')
INSERT INTO PRODUCT_CATEGORY (id, name) VALUES('PCAE','Alimentos envasados')
INSERT INTO PRODUCT_CATEGORY (id, name) VALUES('PCAM','Alimentos mascotas')
INSERT INTO PRODUCT_CATEGORY (id, name) VALUES('PCLH','Limpieza hogar')
INSERT INTO PRODUCT_CATEGORY (id, name) VALUES('PCLP','Limpieza personal')
INSERT INTO PRODUCT_CATEGORY (id, name) VALUES('PCUM','Menaje')
INSERT INTO PRODUCT_CATEGORY (id, name) VALUES('PCUE','Útiles de escritorio')
INSERT INTO PRODUCT_CATEGORY (id, name) VALUES('PCMO','Muebles de oficina')
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddProduct]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddProduct]
END
GO
CREATE PROCEDURE usp_AddProduct(
	@name VARCHAR(250),
	@description VARCHAR(500),
	@price DECIMAL(10,2),
	@stock INT,
	@status CHAR(1),
	@photo IMAGE,
	@id INT OUT
) AS
	BEGIN
		INSERT INTO PRODUCT (name, description, price, stock, status, photo)
		SELECT @name, @description, @price, @stock, @status, @photo
		SET @id = SCOPE_IDENTITY()
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdateProduct]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateProduct]
END
GO
CREATE PROCEDURE usp_UpdateProduct(
	@id INT,
	@name VARCHAR(250),
	@description VARCHAR(500),
	@price DECIMAL(10,2),
	@stock INT,
	@status CHAR(1),
	@photo IMAGE
) AS
	BEGIN
		UPDATE PRODUCT 
		SET name=@name, description=@description, price=@price, stock=@stock, status=@status, photo=@photo
		WHERE id=@id
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryProductsByNameOrDesc]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryProductsByNameOrDesc]
END
GO
CREATE PROCEDURE usp_QueryProductsByNameOrDesc(
	@value VARCHAR(250)
) AS
	SELECT * FROM PRODUCT
	WHERE	name LIKE '%' + @value + '%' OR
			description LIKE '%' + @value + '%'
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllProducts]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllProducts]
END
GO
CREATE PROCEDURE usp_QueryAllProducts AS
	SELECT * FROM PRODUCT
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryProductById]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryProductById]
END
GO
CREATE PROCEDURE usp_QueryProductById(
	@id INT
) AS
	SELECT * FROM PRODUCT
	WHERE	id = @id
GO
DECLARE @new_id INT
EXEC dbo.usp_AddProduct 
			@name='Jabón Pepita', 
			@description='Jabón para limpiar la ropa',
			@price=3.8,
			@stock=200,
			@status='A',
			@photo=NULL,
			@id=@new_id OUTPUT
GO
--SELECT * FROM PRODUCT
EXEC dbo.usp_UpdateProduct @id=1, @name='Jabón Pepita de Marsella', @description='Jabón para lavar la ropa', @price=3.9, @stock=180, @status='A', @photo=NULL
GO
DECLARE @new_id INT
EXEC dbo.usp_AddProduct @name='Jabón Requesona', @description='Jabón de tocador.', @price=3.9, @stock=1000, @status='A', @photo=NULL, @id=@new_id OUTPUT
EXEC dbo.usp_AddProduct @name='Jabón Cayman', @description='Jabón de tocador para piel sensible.', @price=3.8, @stock=500, @status='A', @photo=NULL, @id=@new_id OUTPUT
EXEC dbo.usp_AddProduct @name='Jabón Mux', @description='Jabón de tocador para piel bonita.', @price=4.1, @stock=800, @status='A', @photo=NULL, @id=@new_id OUTPUT

GO
--EXEC dbo.usp_QueryProductsByNameOrDesc 'piel'
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddPerson]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddPerson]
END
GO
CREATE PROCEDURE dbo.usp_AddPerson(
	@doc_number VARCHAR(15),
	@name VARCHAR(100),
	@address VARCHAR(150),
	@phone_number VARCHAR(50),
	@email VARCHAR(150),	
	@status CHAR(1),
	@id INT OUT
 ) AS 
	BEGIN
		INSERT INTO PERSON (doc_number, name, address, phone_number, email, status)
		SELECT 	@doc_number, @name, @address, @phone_number, @email, @status

		SET @id = SCOPE_IDENTITY()	
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdatePerson]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdatePerson]
END
GO
CREATE PROCEDURE dbo.usp_UpdatePerson(
	@doc_number VARCHAR(15),
	@name VARCHAR(100),
	@address VARCHAR(150),
	@phone_number VARCHAR(50),
	@email VARCHAR(150),	
	@status CHAR(1),
	@id INT
 ) AS 
	BEGIN
		UPDATE PERSON
		SET doc_number=@doc_number, name=@name, address=@address, phone_number=@phone_number, email=@email,  status=@status
		WHERE id=@id
	END
GO

IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddSellerCompany]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddSellerCompany]
END				   
GO
CREATE PROCEDURE dbo.usp_AddSellerCompany(
	@vdoc_number VARCHAR(15),
	@vname VARCHAR(100),
	@vaddress VARCHAR(150),
	@vphone_number VARCHAR(50),
	@vemail VARCHAR(150),	
	@cstatus CHAR(1),
	@vpresident VARCHAR(250),
	@iid INT OUT
 ) AS 
	BEGIN
		EXEC dbo.usp_AddPerson @doc_number=@vdoc_number, @name=@vname, @address=@vaddress, @phone_number=@vphone_number, @email=@vemail, @status=@cstatus, @id=@iid OUTPUT
 
		INSERT INTO SELLER_COMPANY (id, president)
		SELECT @iid, @vpresident
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdateSellerCompany]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateSellerCompany]
END				   
GO
CREATE PROCEDURE dbo.usp_UpdateSellerCompany(
	@vdoc_number VARCHAR(15),
	@vname VARCHAR(100),
	@vaddress VARCHAR(150),
	@vphone_number VARCHAR(50),
	@vemail VARCHAR(150),	
	@cstatus CHAR(1),
	@vpresident VARCHAR(250),
	@iid INT
 ) AS 
	BEGIN
		EXEC dbo.usp_UpdatePerson @doc_number=@vdoc_number, @name=@vname, @address=@vaddress, @phone_number=@vphone_number, @email=@vemail, @status=@cstatus, @id=@iid
 
		UPDATE SELLER_COMPANY 
		SET president=@vpresident
		WHERE id = @iid
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllSellerCompanies]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllSellerCompanies]
END
GO
CREATE PROCEDURE usp_QueryAllSellerCompanies AS
	SELECT P.id as id, P.doc_number as doc_number, P.name as name, P.address as address, P.phone_number as phone_number, P.email as email, P.status as status, SC.president as president
	FROM  SELLER_COMPANY SC
	INNER JOIN PERSON P ON P.id = SC.id
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QuerySellerCompanyById]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QuerySellerCompanyById]
END
GO
CREATE PROCEDURE usp_QuerySellerCompanyById(
	@id INT
) AS
	SELECT P.id as id, P.doc_number as doc_number, P.name as name, P.address as address, P.phone_number as phone_number, P.email as email, P.status as status, SC.president as president
	FROM  SELLER_COMPANY SC
	INNER JOIN PERSON P ON P.id = SC.id
	WHERE P.id = @id
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddSalesman]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddSalesman]
END
GO
CREATE PROCEDURE dbo.usp_AddSalesman(
	@vusername VARCHAR(100),
	@vpassword VARCHAR(100),
	@vdoc_number VARCHAR(15),
	@vname VARCHAR(100),
	@vlast_name VARCHAR(100),
	@vaddress VARCHAR(150),
	@vphone_number VARCHAR(50),
	@vemail VARCHAR(150),	
	@dsalary DECIMAL(10,2),
	@vstore VARCHAR(250),
	@cgender CHAR(1),
	@birthday_date DATE,
	@cstatus CHAR(1),
	@dquota DECIMAL(10,2),	
	@iid INT OUT
 ) AS 
	BEGIN
		EXEC dbo.usp_AddPerson @doc_number=@vdoc_number, @name=@vname, @address=@vaddress, @phone_number=@vphone_number, @email=@vemail, @status=@cstatus, @id=@iid OUTPUT
 
		INSERT INTO EMPLOYEE (id, last_name, salary, store, username, password, gender, birthday, employee_type, quota)
		SELECT @iid, @vlast_name, @dsalary, @vstore, @vusername, @vpassword, @cgender, @birthday_date, '1', @dquota

	END
GO
	DECLARE @new_id INT
	EXEC dbo.usp_AddSalesman @vusername='aparedes', @vpassword='password', @vdoc_number='66778899', @vname='Armando', @vlast_name='Paredes', @vaddress='Elm Street 666', @vphone_number='987987987', @vemail='armando.paredes@gmail.com', @dsalary=5000, @vstore='Tienda Camacho', @cgender='M', @birthday_date='19800606', @cstatus='A', @dquota=60000, @iid=@new_id OUTPUT

	EXEC dbo.usp_AddSalesman @vusername='equito', @vpassword='password', @vdoc_number='55778899', @vname='Esteban', @vlast_name='Quito', @vaddress='Javier Prado 666', @vphone_number='967187987', @vemail='esteban.quito@gmail.com', @dsalary=6000, @vstore='Tienda Surco', @cgender='M', @birthday_date='19800603', @cstatus='A', @dquota=60000, @iid=@new_id OUTPUT
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdateSalesman]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateSalesman]
END
GO
CREATE PROCEDURE dbo.usp_UpdateSalesman(
	@vusername VARCHAR(100),
	@vpassword VARCHAR(100),
	@vdoc_number VARCHAR(15),
	@vname VARCHAR(100),
	@vlast_name VARCHAR(100),
	@vaddress VARCHAR(150),
	@vphone_number VARCHAR(50),
	@vemail VARCHAR(150),	
	@dsalary DECIMAL(10,2),
	@vstore VARCHAR(250),
	@cgender CHAR(1),
	@birthday_date DATE,
	@cstatus CHAR(1),
	@dquota DECIMAL(10,2),	
	@iid INT
) AS
	BEGIN
		EXEC dbo.usp_UpdatePerson @doc_number=@vdoc_number, @name=@vname, @address=@vaddress, @phone_number=@vphone_number, @email=@vemail, @status=@cstatus, @id=@iid

		UPDATE EMPLOYEE
		SET last_name=@vlast_name, salary=@dsalary, store=@vstore, username=@vusername, password=@vpassword, gender=@cgender, birthday=@birthday_date, quota=@dquota
		WHERE id=@iid
	END
GO
	EXEC dbo.usp_UpdateSalesman @vusername='aparedes', @vpassword='password', @vdoc_number='66778899', @vname='Armando', @vlast_name='Paredes', @vaddress='Elm Street 666', @vphone_number='987987987', @vemail='armando.paredes@gmail.com', @dsalary=5000, @vstore='Tienda Camacho', @cgender='M', @birthday_date='19800606', @cstatus='A', @dquota=70000, @iid=1 

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_DeleteSalesman]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_DeleteSalesman]
END
GO
CREATE PROCEDURE dbo.usp_DeleteSalesman(
	@iid INT
) AS
	BEGIN
		UPDATE PERSON
		SET status='I'
		WHERE id=@iid
	END
GO

IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllSalesmen]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllSalesmen]
END
GO
CREATE PROCEDURE dbo.usp_QueryAllSalesmen
AS
	SELECT P.id as id, E.username as username, P.name as name, E.last_name as last_name, P.doc_number as doc_number, P.address as address, P.phone_number as phone_number, P.email as email, P.status as status, E.salary as salary, E.store as store, E.gender as gender, E.birthday as birthday, E.quota as quota
	FROM EMPLOYEE E
	INNER JOIN PERSON P ON P.id = E.id
	AND E.employee_type='1'
	ORDER BY E.last_name
GO
	--EXEC dbo.usp_QueryAllSalesmen
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QuerySalesmanById]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QuerySalesmanById]
END
GO
CREATE PROCEDURE dbo.usp_QuerySalesmanById (
	@iid INT
) AS
	SELECT P.id as id, E.username as username, P.name as name, E.last_name as last_name, P.doc_number as doc_number, P.address as address, P.phone_number as phone_number, P.email as email, P.status as status, E.salary as salary, E.store as store, E.gender as gender, E.birthday as birthday, E.quota as quota
	FROM EMPLOYEE E
	INNER JOIN PERSON P ON P.id = E.id
	WHERE E.id = @iid
	AND E.employee_type='1'
	ORDER BY E.last_name
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddStoreManager]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddStoreManager]
END
GO
CREATE PROCEDURE dbo.usp_AddStoreManager(
	@vusername VARCHAR(100),
	@vpassword VARCHAR(100),
	@vdoc_number VARCHAR(15),
	@vname VARCHAR(100),
	@vlast_name VARCHAR(100),
	@vaddress VARCHAR(150),
	@vphone_number VARCHAR(50),
	@vemail VARCHAR(150),	
	@dsalary DECIMAL(10,2),
	@vstore VARCHAR(250),
	@cgender CHAR(1),
	@birthday_date DATE,
	@cstatus CHAR(1),
	@vgoals VARCHAR(1000),	
	@iid INT OUT
 ) AS 
	BEGIN
		EXEC dbo.usp_AddPerson @doc_number=@vdoc_number, @name=@vname, @address=@vaddress, @phone_number=@vphone_number, @email=@vemail, @status=@cstatus, @id=@iid OUTPUT
 
		INSERT INTO EMPLOYEE (id, last_name, salary, store, username, password, gender, birthday, employee_type, goals)
		SELECT @iid, @vlast_name, @dsalary, @vstore, @vusername, @vpassword, @cgender, @birthday_date, '3', @vgoals

	END
GO
	DECLARE @new_id INT
	EXEC dbo.usp_AddStoreManager @vusername='jbaldeon', @vpassword='password', @vdoc_number='40582040', @vname='Johan', @vlast_name='Baldeon', @vaddress='Javier Prado 696', @vphone_number='967406815', @vemail='johan.baldeon@yahoo.com', @dsalary=10000, @vstore='Tienda Camacho', @cgender='M', @birthday_date='19800603', @cstatus='A', @vgoals='Ser la tienda con mayor venta de toda la cadena.', @iid=@new_id OUTPUT
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdateStoreManager]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateStoreManager]
END
GO
CREATE PROCEDURE dbo.usp_UpdateStoreManager(
	@vusername VARCHAR(100),
	@vpassword VARCHAR(100),
	@vdoc_number VARCHAR(15),
	@vname VARCHAR(100),
	@vlast_name VARCHAR(100),
	@vaddress VARCHAR(150),
	@vphone_number VARCHAR(50),
	@vemail VARCHAR(150),	
	@dsalary DECIMAL(10,2),
	@vstore VARCHAR(250),
	@cgender CHAR(1),
	@birthday_date DATE,
	@cstatus CHAR(1),
	@vgoals VARCHAR(1000),	
	@iid INT
) AS
	BEGIN
		EXEC dbo.usp_UpdatePerson @doc_number=@vdoc_number, @name=@vname, @address=@vaddress, @phone_number=@vphone_number, @email=@vemail, @status=@cstatus, @id=@iid

		UPDATE EMPLOYEE
		SET last_name=@vlast_name, salary=@dsalary, store=@vstore, username=@vusername, password=@vpassword, gender=@cgender, birthday=@birthday_date, goals=@vgoals
		WHERE id=@iid
	END
GO
--	EXEC dbo.usp_UpdateStoreManager @vusername='jbaldeon', @vpassword='password', @vdoc_number='55778899', @vname='Johan', @vlast_name='Baldeon', @vaddress='Javier Prado 667', @vphone_number='965321456', @vemail='jbaldeon@gmail.com', @dsalary=10500, @vstore='Tienda Camacho', @cgender='M', @birthday_date='19800603', @cstatus='A', @vgoals='Ser la tienda con mayor venta y satisfacción al cliente.', @iid=3 
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_DeleteStoreManager]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_DeleteStoreManager]
END
GO
CREATE PROCEDURE dbo.usp_DeleteStoreManager(
	@iid INT
) AS
	BEGIN
		UPDATE PERSON
		SET status='I'
		WHERE id=@iid
	END

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllStoreManagers]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllStoreManagers]
END
GO
CREATE PROCEDURE dbo.usp_QueryAllStoreManagers
AS
	SELECT P.id as id, E.username as username, P.name as name, E.last_name as last_name, P.doc_number as doc_number, P.address as address, P.phone_number as phone_number, P.email as email, P.status as status, E.salary as salary, E.store as store, E.gender as gender, E.birthday as birthday, E.goals as goals
	FROM EMPLOYEE E
	INNER JOIN PERSON P ON P.id = E.id
	AND E.employee_type='3'
	ORDER BY E.last_name
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryStoreManagerById]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryStoreManagerById]
END
GO
CREATE PROCEDURE dbo.usp_QueryStoreManagerById (
	@iid INT
) AS
	SELECT P.id as id, E.username as username, P.name as name, E.last_name as last_name, P.doc_number as doc_number, P.address as address, P.phone_number as phone_number, P.email as email, P.status as status, E.salary as salary, E.store as store, E.gender as gender, E.birthday as birthday, E.goals as goals
	FROM EMPLOYEE E
	INNER JOIN PERSON P ON P.id = E.id
	WHERE P.id = @iid
	AND E.employee_type='3'
	ORDER BY E.last_name
GO
	--EXEC dbo.usp_QueryAllStoreManagers
	DECLARE @new_id INT
	EXEC dbo.usp_AddSellerCompany @vdoc_number='66699966699', @vname='Wilson Products', @vaddress='Elm Street 666', @vphone_number='696969699', @vemail='contacto@wilsonproducts.com', @cstatus='A', @vpresident='Pedro Castle', @iid=@new_id OUTPUT	
GO	
	EXEC dbo.usp_UpdateSellerCompany @vdoc_number='66699966699', @vname='Wilson Products S.A.', @vaddress='Elm Street 669', @vphone_number='696969699', @vemail='contacto@wilsonproducts.com', @cstatus='A', @vpresident='Peter Castle', @iid=4
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddSupervisor]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddSupervisor]
END
GO
CREATE PROCEDURE dbo.usp_AddSupervisor(
	@vusername VARCHAR(100),
	@vpassword VARCHAR(100),
	@vdoc_number VARCHAR(15),
	@vname VARCHAR(100),
	@vlast_name VARCHAR(100),
	@vaddress VARCHAR(150),
	@vphone_number VARCHAR(50),
	@vemail VARCHAR(150),	
	@dsalary DECIMAL(10,2),
	@vstore VARCHAR(250),
	@cgender CHAR(1),
	@birthday_date DATE,
	@cstatus CHAR(1),
	@vdepartment VARCHAR(250),	
	@iid INT OUT
 ) AS 
	BEGIN
		EXEC dbo.usp_AddPerson @doc_number=@vdoc_number, @name=@vname, @address=@vaddress, @phone_number=@vphone_number, @email=@vemail, @status=@cstatus, @id=@iid OUTPUT
 
		INSERT INTO EMPLOYEE (id, last_name, salary, store, username, password, gender, birthday, employee_type, department)
		SELECT @iid, @vlast_name, @dsalary, @vstore, @vusername, @vpassword, @cgender, @birthday_date, '2', @vdepartment
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddNaturalCustomer]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddNaturalCustomer]
END
GO
CREATE PROCEDURE dbo.usp_AddNaturalCustomer(
	@vname VARCHAR(100),
	@vlast_name VARCHAR(100),	
	@vdoc_number VARCHAR(15),
	@vaddress VARCHAR(150),
	@vphone_number VARCHAR(50),	
	@vemail VARCHAR(150),	
	@dbirthday DATE,
	@cgender CHAR(1),
	@icustomer_points INT,	
	@cstatus CHAR(1),
	@iid INT OUT
) AS
	BEGIN
		EXEC dbo.usp_AddPerson @doc_number=@vdoc_number, @name=@vname, @address=@vaddress, @phone_number=@vphone_number, @email=@vemail, @status=@cstatus, @id=@iid OUTPUT
 
		INSERT INTO CUSTOMER (id, customer_points, last_name, gender, birthday, customer_type)
		SELECT @iid, @icustomer_points, @vlast_name, @cgender, @dbirthday, '1'		
	END
GO
DECLARE @new_identity INT
EXEC dbo.usp_AddNaturalCustomer @vname='Zoila', @vlast_name='Baca',@vdoc_number='12367832', @vaddress='Calle Los Maestros 123, San Borja',@vphone_number='921321321', @vemail='zoila.baca@gmail.com', @dbirthday='1980-06-03',@cgender='F', @icustomer_points=100, @cstatus='A', @iid=@new_identity OUTPUT 
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdateNaturalCustomer]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateNaturalCustomer]
END
GO
CREATE PROCEDURE dbo.usp_UpdateNaturalCustomer(
	@vname VARCHAR(100),
	@vlast_name VARCHAR(100),	
	@vdoc_number VARCHAR(15),
	@vaddress VARCHAR(150),
	@vphone_number VARCHAR(50),	
	@vemail VARCHAR(150),	
	@dbirthday DATE,
	@cgender CHAR(1),
	@icustomer_points INT,	
	@cstatus CHAR(1),
	@iid INT
) AS
	BEGIN
		EXEC dbo.usp_UpdatePerson @doc_number=@vdoc_number, @name=@vname, @address=@vaddress, @phone_number=@vphone_number, @email=@vemail, @status=@cstatus, @id=@iid

		UPDATE CUSTOMER
		SET customer_points=@icustomer_points, last_name=@vlast_name, gender=@cgender, birthday=@dbirthday
		WHERE id=@iid
	END
GO
--EXEC dbo.usp_UpdateNaturalCustomer @vname='Zoila', @vlast_name='Baca',@vdoc_number='12367832', @vaddress='Calle Los Maestros 666, San Borja',@vphone_number='921321321', @vemail='zoila.baca@gmail.com', @dbirthday='1980-06-03',@cgender='F', @icustomer_points=150, @cstatus='A', @iid=5
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllNaturalCustomers]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllNaturalCustomers]
END
GO
CREATE PROCEDURE usp_QueryAllNaturalCustomers AS
	SELECT P.id as id, P.doc_number as doc_number, P.name as name, C.last_name as last_name, P.address as address, P.phone_number as phone_number, P.email as email, C.gender as gender, C.birthday as birthday, P.status as status
	FROM  CUSTOMER C
	INNER JOIN PERSON P ON P.id = C.id
	AND C.customer_type='1'
	AND P.status='A'
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryNaturalCustomerById]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryNaturalCustomerById]
END
GO
CREATE PROCEDURE usp_QueryNaturalCustomerById(
	@iid INT
) AS
	SELECT P.id as id, P.doc_number as doc_number, P.name as name, C.last_name as last_name, P.address as address, P.phone_number as phone_number, P.email as email, C.gender as gender, C.birthday as birthday, P.status as status
	FROM  CUSTOMER C
	INNER JOIN PERSON P ON P.id = C.id
	AND C.id = @iid
	AND C.customer_type='1'
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddCompanyCustomer]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddCompanyCustomer]
END
GO
CREATE PROCEDURE dbo.usp_AddCompanyCustomer(
	@vname VARCHAR(100),
	@vdoc_number VARCHAR(15),
	@vaddress VARCHAR(150),
	@vphone_number VARCHAR(50),	
	@vemail VARCHAR(150),	
	@icustomer_points INT,
	@vweb_page VARCHAR(250),
	@vagent VARCHAR(100),
	@cstatus CHAR(1),
	@iid INT OUT
) AS
	BEGIN
		EXEC dbo.usp_AddPerson @doc_number=@vdoc_number, @name=@vname, @address=@vaddress, @phone_number=@vphone_number, @email=@vemail, @status=@cstatus, @id=@iid OUTPUT
 
		INSERT INTO CUSTOMER (id, customer_points, web_page, agent, customer_type)
		SELECT @iid, @icustomer_points, @vweb_page, @vagent, '2'		
	END
GO
DECLARE @new_identity INT
EXEC dbo.usp_AddCompanyCustomer @vname='Los Bicampeones', @vdoc_number='34123678322', @vaddress='Calle Los Tricampeones 123, San Isidro',@vphone_number='321321321', @vemail='contact@bicampeones.com', @icustomer_points=100, @vweb_page='www.bicampeones.com', @vagent='José Luis Perales', @cstatus='A', @iid=@new_identity OUTPUT 
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdateCompanyCustomer]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateCompanyCustomer]
END
GO
CREATE PROCEDURE dbo.usp_UpdateCompanyCustomer(
	@vname VARCHAR(100),
	@vdoc_number VARCHAR(15),
	@vaddress VARCHAR(150),
	@vphone_number VARCHAR(50),	
	@vemail VARCHAR(150),	
	@icustomer_points INT,		
	@vweb_page VARCHAR(250),
	@vagent VARCHAR(100),
	@cstatus CHAR(1),
	@iid INT
) AS
	BEGIN
		EXEC dbo.usp_UpdatePerson @doc_number=@vdoc_number, @name=@vname, @address=@vaddress, @phone_number=@vphone_number, @email=@vemail, @status=@cstatus, @id=@iid

		UPDATE CUSTOMER
		SET customer_points=@icustomer_points, web_page=@vweb_page, agent=@vagent
		WHERE id=@iid
	END
GO
--EXEC dbo.usp_UpdateCompanyCustomer @vname='Los Bicampeones', @vdoc_number='34123678322', @vaddress='Calle Los Maestros 667, San Borja',@vphone_number='321321321', @vemail='contact@bicampeones.com', @icustomer_points=200, @vweb_page='http://www.bicampeones.com', @vagent='Pedro Picapiedra', @cstatus='A', @iid=6
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllCompanyCustomers]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllCompanyCustomers]
END
GO
CREATE PROCEDURE usp_QueryAllCompanyCustomers AS
	SELECT P.id as id, P.doc_number as doc_number, P.name as name, P.address as address, P.phone_number as phone_number, P.email as email, C.web_page as web_page, C.agent as agent, P.status as status
	FROM  CUSTOMER C
	INNER JOIN PERSON P ON P.id = C.id
	AND C.customer_type='2'
	AND P.status = 'A'
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryCompanyCustomerById]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryCompanyCustomerById]
END
GO
CREATE PROCEDURE usp_QueryCompanyCustomerById(
	@iid INT
) AS
	SELECT P.id as id, P.doc_number as doc_number, P.name as name, P.address as address, P.phone_number as phone_number, P.email as email, C.web_page as web_page, C.agent as agent, P.status as status
	FROM  CUSTOMER C
	INNER JOIN PERSON P ON P.id = C.id
	AND C.id = @iid
	AND C.customer_type='2'
	
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllCustomers]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllCustomers]
END
GO
CREATE PROCEDURE usp_QueryAllCustomers AS
	SELECT P.id as id, P.doc_number as doc_number, P.name as name, C.last_name as last_name, P.address as address, P.phone_number as phone_number, P.email as email, C.gender as gender, C.birthday as birthday, P.status as status, C.customer_type as customer_type
	FROM  CUSTOMER C
	INNER JOIN PERSON P ON P.id = C.id
	AND P.status = 'A'
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryCustomerById]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryCustomerById]
END
GO
CREATE PROCEDURE usp_QueryCustomerById (
	@iid INT
) AS
	SELECT P.id as id, P.doc_number as doc_number, P.name as name, C.last_name as last_name, P.address as address, P.phone_number as phone_number, P.email as email, C.gender as gender, C.birthday as birthday, C.web_page as web_page, C.agent as agent, C.customer_points as customer_points, P.status as status, C.customer_type as customer_type
	FROM  CUSTOMER C
	INNER JOIN PERSON P ON P.id = C.id
	WHERE C.id = @iid
	AND P.status = 'A'
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryCustomerByDocNumber]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryCustomerByDocNumber]
END
GO
CREATE PROCEDURE usp_QueryCustomerByDocNumber (
	@vdoc_number VARCHAR(15)
) AS
	SELECT P.id as id, P.doc_number as doc_number, P.name as name, C.last_name as last_name, P.address as address, P.phone_number as phone_number, P.email as email, C.gender as gender, C.birthday as birthday, C.web_page as web_page, C.agent as agent, C.customer_points as customer_points, P.status as status, C.customer_type as customer_type
	FROM  CUSTOMER C
	INNER JOIN PERSON P ON P.id = C.id
	WHERE P.doc_number = @vdoc_number
	AND P.status = 'A'
GO

IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_DeleteCustomer]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_DeleteCustomer]
END
GO
CREATE PROCEDURE dbo.usp_DeleteCustomer(
	@iid INT
) AS
	BEGIN
		UPDATE PERSON
		SET status = 'I'
		WHERE id=@iid
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddStore]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddStore]
END
GO
CREATE PROCEDURE dbo.usp_AddStore(
	@vname VARCHAR(150),
	@vdescription VARCHAR(500),
	@vaddress VARCHAR(150),
	@vpostal_code VARCHAR(50),
	@darea DECIMAL(10,2),
	@chas_cooling_system CHAR(1),
	@vdistrict_id VARCHAR(6),
	@icapacity INT,
	@dsales_goal DECIMAL(10,2),
	@istore_manager_id INT,
	@iid INT OUT
 ) AS 
	BEGIN
		INSERT INTO PREMISE(name, description, address, postal_code, area, has_cooling_system, status, district_id)
		SELECT @vname, @vdescription, @vaddress, @vpostal_code, @darea, @chas_cooling_system, 'A', @vdistrict_id
		SET @iid = SCOPE_IDENTITY()	
		
		INSERT INTO STORE(id, capacity, sales_goal, store_manager_id)
		SELECT @iid, @icapacity, @dsales_goal, @istore_manager_id		
	END
GO
DECLARE @new_id INT
EXEC dbo.usp_AddStore @vname='Tienda Camacho', @vdescription='Primera tienda con todos los productos', @vaddress='Av. Javier Prado 123', @vpostal_code='15023', @darea=1000, @chas_cooling_system='S', @vdistrict_id='150114', @icapacity=70, @dsales_goal=5000, @istore_manager_id=2, @iid=@new_id OUTPUT
EXEC dbo.usp_AddStore @vname='Tienda Surco', @vdescription='Segunda tienda con todos los productos', @vaddress='Av. Velasco AStete 123', @vpostal_code='15021', @darea=1000, @chas_cooling_system='S', @vdistrict_id='150140', @icapacity=70, @dsales_goal=5500, @istore_manager_id=2, @iid=@new_id OUTPUT

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdateStore]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateStore]
END
GO
CREATE PROCEDURE dbo.usp_UpdateStore(
	@vname VARCHAR(150),
	@vdescription VARCHAR(500),
	@vaddress VARCHAR(150),
	@vpostal_code VARCHAR(50),
	@darea DECIMAL(10,2),
	@chas_cooling_system CHAR(1),
	@vdistrict_id VARCHAR(6),
	@icapacity INT,
	@dsales_goal DECIMAL(10,2),
	@istore_manager_id INT,
	@cstatus CHAR(1),
	@iid INT
 ) AS 
	BEGIN
		UPDATE PREMISE SET name=@vname, description=@vdescription, address=@vaddress, postal_code=@vpostal_code, area=@darea, has_cooling_system=@chas_cooling_system, status=@cstatus, district_id=@vdistrict_id
		WHERE id=@iid
		
		UPDATE STORE SET capacity=@icapacity, sales_goal=@dsales_goal, store_manager_id=@istore_manager_id
		WHERE id=@iid
	END
GO
--EXEC dbo.usp_UpdateStore @name='Tienda Camacho La Molina', @description='Primera tienda con todos los productos', @address='Av. Javier Prado 123', @postal_code='15023', @area=1000, @has_cooling_system='S', @district_id='150140', @capacity=100, @sales_goal=5000, @store_manager_id=2, @id=1
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_DeleteStore]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_DeleteStore]
END
GO
CREATE PROCEDURE dbo.usp_DeleteStore(
	@iid INT
 ) AS 
	BEGIN
		UPDATE PREMISE SET status='I'
		WHERE id=@iid
	END
GO

IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllStores]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllStores]
END
GO
CREATE PROCEDURE dbo.usp_QueryAllStores
AS
	SELECT P.id as id, P.name as name, P.description as description, P.address as address, P.postal_code as postal_code, P.area as area, P.has_cooling_system as has_cooling_system, S.capacity as capacity, S.sales_goal as sales_goal, P.status as status, PE.name as store_manager_name, E.last_name as store_manager_last_name, D.name as district_name
	FROM STORE S
	INNER JOIN PREMISE P ON S.id = P.id
	INNER JOIN EMPLOYEE E ON S.store_manager_id = E.id
	INNER JOIN PERSON PE ON E.id = PE.id
	INNER JOIN DISTRICT D ON P.district_id = D.id
	ORDER BY P.name
GO
	--EXEC dbo.usp_QueryAllStores
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryStoreById]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryStoreById]
END
GO
CREATE PROCEDURE dbo.usp_QueryStoreById(
	@iid INT
) AS
	SELECT P.id as id, P.name as name, P.description as description, P.address as address, P.postal_code as postal_code, P.area as area, P.has_cooling_system as has_cooling_system, S.capacity as capacity, S.sales_goal as sales_goal, P.status as status, PE.name as store_manager_name, E.last_name as store_manager_last_name, D.name as district_name
	FROM STORE S
	INNER JOIN PREMISE P ON S.id = P.id
	INNER JOIN EMPLOYEE E ON S.store_manager_id = E.id
	INNER JOIN PERSON PE ON E.id = PE.id
	INNER JOIN DISTRICT D ON P.district_id = D.id
	AND S.id = @iid
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryStoreByName]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryStoreByName]
END
GO
CREATE PROCEDURE dbo.usp_QueryStoreByName(
	@vname VARCHAR(150)
) AS
	SELECT P.id as id, P.name as name, P.description as description, P.address as address, P.postal_code as postal_code, P.area as area, P.has_cooling_system as has_cooling_system, S.capacity as capacity, S.sales_goal as sales_goal, PE.name as store_manager_name, E.last_name as store_manager_last_name, D.name as district_name
	FROM STORE S
	INNER JOIN PREMISE P ON S.id = P.id
	INNER JOIN EMPLOYEE E ON S.store_manager_id = E.id
	INNER JOIN PERSON PE ON E.id = PE.id
	INNER JOIN DISTRICT D ON P.district_id = D.id
	AND P.name = @vname
GO

	--Para agregar un cliente del tipo persona natural
	DECLARE @iid INT
	EXEC dbo.usp_AddPerson @doc_number='45342312', @name='Willy', @address='Calle Los Bicampeones 123', @phone_number='96969696', @email='willy.colon@gmail.com', @status='A', @id=@iid OUTPUT 
	
	INSERT INTO CUSTOMER(id, customer_points, last_name, gender, birthday, customer_type)
	SELECT @iid, 150, 'Colón', 'M', '1999-07-31', '1'
GO	
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddSale]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddSale]
END
GO
CREATE PROCEDURE dbo.usp_AddSale(
	@transaction_date DATE,
	@status char(1),
	@total DECIMAL(10,2),
	@customer_id INT,
	@salesman_id INT,
	@store_id INT,
	@id INT OUT
)
AS
	BEGIN
		INSERT INTO SALE(transaction_date,status, total, customer_id, salesman_id, store_id)
		SELECT @transaction_date, @status, @total, @customer_id, @salesman_id, @store_id
		
		SET @id=SCOPE_IDENTITY()
	END
GO
DECLARE @new_identity INT
EXEC dbo.usp_AddSale @transaction_date='2022-11-21', @status='A', @total=150, @customer_id=5, @salesman_id=1, @store_id=1, @id=@new_identity OUTPUT
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddSaleDetail]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddSaleDetail]
END
GO
CREATE PROCEDURE dbo.usp_AddSaleDetail(
	@sale_id INT,
	@product_id INT,
	@quantity INT,
	@subtotal DECIMAL(10,2),
	@unit_price DECIMAL(10,2),
	@id INT OUT
)
AS
	BEGIN
		INSERT INTO SALE_DETAIL(sale_id, product_id, quantity, subtotal, unit_price)
		SELECT @sale_id, @product_id, @quantity, @subtotal, @unit_price
		
		SET @id=SCOPE_IDENTITY()
	END
GO
DECLARE @new_identity INT
EXEC dbo.usp_AddSaleDetail @sale_id=1, @product_id=1, @quantity=2, @subtotal=7.8,
@unit_price=3.9, @id=@new_identity OUTPUT
EXEC dbo.usp_AddSaleDetail @sale_id=1, @product_id=3, @quantity=1, @subtotal=3.8,
@unit_price=3.8, @id=@new_identity OUTPUT
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllSales]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllSales]
END
GO
CREATE PROCEDURE dbo.usp_QueryAllSales
AS
	SELECT *
	FROM SALE
--	INNER JOIN PREMISE P ON S.id = P.id
--	INNER JOIN EMPLOYEE E ON S.store_manager_id = E.id
--	INNER JOIN PERSON PE ON E.id = PE.id
--	INNER JOIN DISTRICT D ON P.district_id = D.id
	ORDER BY id
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QuerySaleById]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QuerySaleById]
END
GO
CREATE PROCEDURE dbo.usp_QuerySaleById (
	@id INT
)
AS
	SELECT *
	FROM SALE
	WHERE id = @id
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_ValidateUser]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_ValidateUser]
END
GO
CREATE PROCEDURE dbo.usp_ValidateUser (
	@vusername VARCHAR(100),
	@vpassword VARCHAR(100)
)
AS
	SELECT *
	FROM EMPLOYEE E
	INNER JOIN PERSON P ON P.id = E.id
	WHERE E.username = @vusername
	AND	E.password = @vpassword 
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllDistricts]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllDistricts]
END
GO
CREATE PROCEDURE dbo.usp_QueryAllDistricts
AS
	SELECT *
	FROM DISTRICT
--	INNER JOIN PREMISE P ON S.id = P.id
--	INNER JOIN EMPLOYEE E ON S.store_manager_id = E.id
--	INNER JOIN PERSON PE ON E.id = PE.id
--	INNER JOIN DISTRICT D ON P.district_id = D.id
	ORDER BY id
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryDistrictById]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryDistrictById]
END
GO
CREATE PROCEDURE dbo.usp_QueryDistrictById (
	@vid VARCHAR(6)
)
AS
	SELECT *
	FROM DISTRICT
	WHERE id = @vid
GO
	DECLARE @new_id INT
	EXEC dbo.usp_AddSupervisor @vusername='ezurita', @vpassword='password', @vdoc_number='40582041', @vname='Elba', @vlast_name='Zurita', @vaddress='Los Moller 996', @vphone_number='967406811', @vemail='elba.zurita@yahoo.com', @dsalary=6000, @vstore='Tienda Camacho', @cgender='F', @birthday_date='19800601', @cstatus='A', @vdepartment='Aseo y Limpieza.', @iid=@new_id OUTPUT
GO




