# Write your MySQL query statement below
select  s.student_id,s.student_name,
sub.subject_name, COUNT(e.student_id) as attended_exams
from Students as s
CROSS JOIN Subjects as sub
LEFT JOIN Examinations as e
on e.student_id=s.student_id
and e.subject_name=sub.subject_name
Group by s.student_id,s.student_name,sub.subject_name
order by s.student_id