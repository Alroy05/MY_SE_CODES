CREATE OR REPLACE FUNCTION sum_of_digits(num integer) returns integer as
$$
DECLARE
digit1 INTEGER;
digit2 INTEGER;
digit3 INTEGER;
sum INTEGER;
BEGIN
digit1 := num / 100;
digit2 := (num % 100) / 10;
digit3 := num % 10;
sum := digit1 + digit2 + digit3;
-- RAISE NOTICE 'Sum of digits of % is %', num, sum;
RETURN sum;
END;
$$
LANGUAGE PLPGSQL;
select sum_of_digits(245);

create or replace function squares() returns INTEGER as
$$
DECLARE
num INTEGER = 1;
square INTEGER;
BEGIN
WHILE num <= 10 LOOP
square := num * num;
RAISE NOTICE '%^2 = %', num, square;
num = num + 1;
END LOOP;
return 0;
END;
$$
LANGUAGE PLPGSQL;
select squares();

create or replace function fibbo() returns integer as
$$
DECLARE
   num1 integer = 0;
   num2 integer = 1;
   count integer = 1;
   temp integer;
BEGIN
   while count <=8 LOOP
      raise NOTICE '%',num1;
      temp = num1;
      num1 = num1 + num2;
      num2 = temp;
      count = count + 1;
    end loop;
  return 0;
END;
$$
LANGUAGE PLPGSQL;
select fibbo();
   