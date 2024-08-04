# Y-maze Counter
Developed by: Juicyburger1250 (SeungHun Kim) on Aug 04, 2024.   
## What is Y-maze test?
Y-maze test is conducted for ethological analysis of animals. (Usually rodents)   
The test gives quantitive data of spatial memory of the animals.   
During the specific time, an animal move inside the maze, arm to arm.   
Tester records which arm the animal went.   
If arms are named A, B, and C, The record could be written like this: `ACBABCACABBBACBACBACBBCA`.   
This record can be analysed in triads.   
Total Possible Triads are `ACB`, `CBA`, `BAB`.. in example record.   
Spontaneous Alternations are triads containing A, B, C, no matter which order are they.     
The quantitive data is usually calculated by the following formula.   
$$Alternation\ percentage=\frac{Spontaneous\ Alternations}{Total\ Possible\ Triads}$$   
## What does this software do?
- Input: number of samples to calculate, records (in string).   
- Calculations: number of triads, whether the triad is spontaneous alternation or not.   
- Output: number of Total Possible Triads, number of Spontaneous Alternations, Alternation percentage.
## Acknowledgement
This program was thought, and created while participating Pre-URP 2024, in `LAB OF NEURONAL CELL DEATH, DGIST`.   
I deeply thank Ms. Ha and Prof. Yu for letting me have wonderful, scholar experiences during the camp.

