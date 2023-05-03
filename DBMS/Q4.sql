CREATE TABLE employee(
    empno numeric(4),
    ename varchar(10),
    salary numeric(8,2),
    designation varchar(10)
);

alter table employee alter column empno set data type numeric(6);
alter table employee alter column ename set data type varchar(20),alter column designation set data type varchar(20);
alter table employee add column qualification varchar(6);
alter table employee add column dob date,add column doj date;
alter table employee drop column doj;
alter table employee drop column dob,drop column qualification;
insert into employee values (3,'jenny',200000.00,'manager');
truncate employee;
drop table employee;


