# Write your MySQL query statement below
Select person.firstname, person.lastname, address.city, address.state from person left join address on person.personid = address.personId;