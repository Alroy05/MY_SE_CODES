create table company1(
    id int,
    name text not null,
    age int not null,
    address varchar(50),
    salary real
);
-- insert into company1 values(5,NULL,NULL,'VASAI',7888)

create table company3(
   id int not null,
   name text not null,
   age int unique,
   address varchar(50),
   salary real
);

-- insert into company3 values(4,'alroy',19,'vasai',8765);
-- insert into company3 values(6,'ay',19,'vasai',87265);

create table company4(
   id int primary key,
   name text not null,
   age int,
   address varchar(50),
   salary real
);

-- insert into company4 values(4,'alroy',19,'vasai',8765);
-- insert into company4 values(4,'ay',19,'vasai',87265);

create table employee(
   id int primary key,
   name text not null,
   age int,
   address varchar(50),
   salary real
);

-- insert into employee values(1,'alroy',19,'vasai',8765);
-- insert into employee values(2,'ay',19,'vasai',87265);

create table department(
   id int primary key,
   name varchar(50) NOT null,
   emp_id int references employee(id)
);

-- insert into department values(1,'comps',3);

create table company5(
   id int,
   name text not null,
   age int,
   address varchar(50),
   salary real check(salary>0)
);

-- insert into company5 values(1,'alroy',19,'vasai',-8765);

