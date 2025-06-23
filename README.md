 Employee Overtime Pay Calculator

This C++ program calculates employee pay based on hours worked and hourly wage, including overtime compensation for hours exceeding 40. It demonstrates the use of `struct`, file input/output, conditional logic, and basic data formatting.

---

 Features

- Accepts input for multiple employees
- Calculates total pay including overtime (1.5× rate after 40 hours)
- Stores employee data in a file (`overtime.txt`)
- Reads and displays data in a formatted payroll report
- Uses arrays and structures for organized data management

---

  Overtime Calculation Logic

- If total hours worked ≤ 40:
  - `total_pay = total_hours * hourly_wage`
- If total hours worked > 40:
  - `overtime_hours = total_hours - 40`
  - `overtime_pay = overtime_hours * hourly_wage * 1.5`
  - `total_pay = (40 * hourly_wage) + overtime_pay`

---


