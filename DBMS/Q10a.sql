create or replace function fact(num integer) returns integer as
$$
DECLARE
  temp integer =num-1;
BEGIN
  WHILE temp >= 1 loop
  num = num * temp;
  temp = temp - 1;
  end loop;
  return num;
end;
$$
language plpgsql;
select fact(5);

CREATE Table emp(
   id numeric(6) PRIMARY KEY,
   name varchar(10),
   salary numeric(10)
);
insert into emp values(1,'Namrata',90000);
insert into emp values(2,'Pearl',80000);
insert into emp values(3,'Risa',70000);
select * from emp;

create or replace function ava_salary() returns numeric as 
$$
DECLARE 
   total_salary numeric = 0;
   total_count numeric = 0;
BEGIN
   select sum(salary),count(*) into total_salary,total_count from emp;
   if total_count =0 then
        return 0;
    else 
        return total_salary/total_count;
    end if;
end;
$$
language plpgsql;
select ava_salary();
   
