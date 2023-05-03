CREATE Table emp(
   id numeric(6) PRIMARY KEY,
   name varchar(10),
   salary numeric(10)
);

create or replace function trigger_funct() returns trigger as 
$$
BEGIN
  raise exception 'insert/delete/update action was performed';
END;
$$
language plpgsql;

create trigger emp_trigger
before insert or delete or update on emp for each row
execute function trigger_funct();

insert into emp values(1,'Namrata',90000);
insert into emp values(2,'Pearl',80000);
insert into emp values(3,'Risa',70000);
select * from emp;