SELECT 
    CASE WHEN EmployeeUNI.unique_id IS NULL THEN null ELSE EmployeeUNI.unique_id  END AS unique_id,
    Employees.name
FROM 
    Employees
LEFT JOIN 
    EmployeeUNI ON Employees.id = EmployeeUNI.id;
