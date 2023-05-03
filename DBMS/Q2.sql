CREATE TABLE client_master(
    client_no varchar(6),
    cName varchar(20),
    cAddress varchar(30),
    cCity varchar(15),
    cPincode numeric(8),
    cState varchar(15),
    bal_due numeric(10,2)
);

CREATE TABLE product_master(
    product_no varchar(6),
    description varchar(15),
    profit_percent numeric(4,2),
    unit_measure varchar(10),
    qty_on_hand numeric(8),
    reorder_level numeric(8),
    sell_price numeric(8,2),
    cost_price numeric(8,2)
);

CREATE TABLE sales_order(
   order_no varchar(6),
   order_date date,
   client_no varchar(6),
   dely_addr varchar(25),
   salesman_no varchar(6),
   dely_type char(1),
   billed_yn char(1),
   dely_date date,
   order_status varchar(10)
);

insert into client_master values
('C00001', 'John Doe', '123 Main St', 'Mumbai', 10001, 'NY',0.00),
('C00002', 'Jane Smith', '456 High St', 'San Francisco', 94110, 'CA', 500.00),
('C00003', 'Bob Johnson', '789 Elm St', 'Tamil Nadu', 90001, 'Tamil Nadu', 0.00),
('C00004', 'Alice Lee', '234 Oak St', 'Mumbai', 60601, 'IL', 1000.00),
('C00005', 'David Brown', '567 Maple St', 'Mumbai', 400001, 'Maharashtra', 12500.00),
('C00006', 'Sarah Kim', '890 Pine St', 'Seoul', 12345, 'South Korea', 100000.00);

INSERT INTO product_master VALUES
('P00001', 'hard disk', 0.25, 'Each', 100, 50, 3000, 8.50),
('P00002', 'Widget B', 0.20, 'Each', 50, 25, 500, 11.50),
('P00003', 'Gizmo X', 0.35, 'Each', 200, 75, 4000, 22.50),
('P00004', 'Thingamajig Y', 0.30, 'Each', 75, 30, 6000, 16.50),
('P00005', 'Doohickey Z', 0.40, 'Each', 150, 50, 5000, 6.50),
('P00006', 'Sprocket W', 0.15, 'Each', 25, 10, 1500, 4.50);

insert into sales_order values
('ORD001', '2022-01-01', 'C001', '123 Main St', 'S001', 'A', 'Y', '2022-01-05', 'COMPLETE'),
('ORD002', '2022-02-02', 'C002', '456 Oak Ave', 'S002', 'B', 'N', NULL, 'PROCESSING'),
('ORD003', '2022-03-03', 'C003', '789 Elm St', 'S003', 'C', 'N', NULL, 'PROCESSING'),
('ORD004', '2022-04-04', 'C004', '321 Maple Ave', 'S001', 'A', 'Y', '2022-04-09', 'COMPLETE'),
('ORD005', '2022-05-05', 'C005', '654 Pine St', 'S002', 'B', 'Y', '2022-05-10', 'COMPLETE'),
('ORD006', '2022-06-06', 'C001', '123 Main St', 'S003', 'C', 'N', NULL, 'PROCESSING');

select * from client_master where substring(cName,2,1) = 'a';
select * from client_master where substring(cCity,2,1) = 'a';
select * from client_master where cCity = 'Mumbai' order by cName;
select * from client_master where bal_due > 10000;
select * from sales_order where MONTH(order_date)=1;
select * from sales_order where client_no = 'C001' or client_no = 'C002';
select * from product_master where sell_price > 2000 and sell_price <= 5000;
select product_no,description,sell_price*1.5 as new_price from product_master where sell_price > 1500;
select count(*) from sales_order;
select avg(sell_price) from product_master;
select min(sell_price) from product_master;
select max(sell_price) from product_master;
select count(*) from product_master where sell_price >= 1500;
select order_no,day(order_date) from sales_order;
