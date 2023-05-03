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

insert into client_master values
('C00001', 'John Doe', '123 Main St', 'New York', 10001, 'NY',0.00),
('C00002', 'Jane Smith', '456 High St', 'San Francisco', 94110, 'CA', 500.00),
('C00003', 'Bob Johnson', '789 Elm St', 'Tamil Nadu', 90001, 'Tamil Nadu', 0.00),
('C00004', 'Alice Lee', '234 Oak St', 'Chicago', 60601, 'IL', 1000.00),
('C00005', 'David Brown', '567 Maple St', 'Mumbai', 400001, 'Maharashtra', 2500.00),
('C00006', 'Sarah Kim', '890 Pine St', 'Seoul', 12345, 'South Korea', 0.00);

INSERT INTO product_master VALUES
('P00001', 'hard disk', 0.25, 'Each', 100, 50, 10.99, 8.50),
('P00002', 'Widget B', 0.20, 'Each', 50, 25, 14.99, 11.50),
('P00003', 'Gizmo X', 0.35, 'Each', 200, 75, 29.99, 22.50),
('P00004', 'Thingamajig Y', 0.30, 'Each', 75, 30, 19.99, 16.50),
('P00005', 'Doohickey Z', 0.40, 'Each', 150, 50, 9.99, 6.50),
('P00006', 'Sprocket W', 0.15, 'Each', 25, 10, 5.99, 4.50);

select cName from client_master;
select * from client_master;
select cName,cCity from client_master;
select description from product_master;
select * from client_master where cCity = 'Mumbai';
update client_master set cCity='Mumbai' where client_no = 'C00001';
update client_master set bal_due = 1000 where client_no = 'C00005';
update product_master set cost_price = 3000 where description = 'hard disk';
delete from product_master where qty_on_hand < 100;
delete from client_master where cState = 'Tamil Nadu';
-- truncate client_master;
-- truncate product_master;
-- drop table client_master;
-- drop table product_master;
-- select * from product_master;
-- select * from client_master;