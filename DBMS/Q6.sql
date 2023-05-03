create table sales_order_details(
    order_no varchar(6) primary key,
    product_no varchar(6),
    qty_ordered numeric(8),
    qty_disp numeric(8),
    product_rate numeric(10,2)
);

create table customer(
    cid int primary key,
    cname text,
    address varchar(20),
    pno varchar
);

create table cust_order(
    cid int,
    order_no varchar(6),
    foreign key(cid) references customer(cid),
    foreign key(order_no) references sales_order_details(order_no)
);

INSERT INTO sales_order_details VALUES
('ORD001', 'P001', 10, 5, 100.00),
('ORD002', 'P002', 5, 5, 50.00),
('ORD003', 'P003', 20, 10, 200.00),
('ORD004', 'P001', 15, 10, 100.00),
('ORD005', 'P004', 8, 8, 80.00),
('ORD006', 'P005', 12, 10, 12000.00);
INSERT INTO customer VALUES
(101, 'John Doe', '123 Main St', '555-1234'),
(102, 'Jane Smith', '456 Oak Ave', '555-5678'),
(103, 'Bob Johnson', '789 Elm St', '555-9012'),
(104, 'Mary Lee', '101 Pine St', '555-3456'),
(105, 'Tom Jones', '234 Maple Ave', '555-7890');
INSERT INTO cust_order VALUES
(101, 'ORD001'),
(102, 'ORD002'),
(103, 'ORD003'),
(101, 'ORD004'),
(104, 'ORD005'),
(105, 'ORD006');

select * from sales_order_details;
select sum(qty_ordered) as total_sold from sales_order_details;
select qty_disp*product_rate as total_value from sales_order_details;
select avg(qty_ordered) as avg_qty_sold from sales_order_details where qty_disp*product_rate < 15000;
SELECT SUM(Qty_disp * Product_rate) AS total_billed FROM sales_order_details WHERE MONTH(order_date); --add a column date
SELECT DISTINCT c.cname FROM customer c JOIN cust_order co ON c.cid = co.cid JOIN sales_order_details s ON co.order_no = s.order_no WHERE s.Qty_ordered > 10;
-- SELECT c.cname, s.Product_no, MAX(s.Qty_ordered) as MaxQtyOrdered
-- FROM customer c
-- JOIN cust_order co ON c.cid = co.cid
-- JOIN sales_order_details s ON co.order_no = s.order_no
-- GROUP BY c.cname, s.pno
-- HAVING MAX(s.qty_ordered) = (
--   SELECT MAX(qty_ordered) 
--   FROM sales_order_details s2 
--   WHERE s2.pno = s.pno
-- );
-- select * from customer;
-- select * from cust_order;
