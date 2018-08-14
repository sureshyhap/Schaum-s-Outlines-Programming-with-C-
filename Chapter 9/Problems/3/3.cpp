/*
a. s becomes ABC, n becomes 456, x becomes 7.89, s becomes XYZ
b. s becomes ABC, n becomes 4567, x becomes .89, s becomes XYZ
c. s becomes ABC, n becomes 456, x becomes 7.8, s becomes 9XYZ
d. s becomes ABC456, n becomes 7, x becomes 9, s becomes XYZ // Crashes after trying to read 7.8 into integer actually
e. s becomes ABC456, n becomes 7, x becomes .89, s becomes XYZ
f. s becomes ABC4, n becomes 56, x becomes 7.89, s becomes XY??????????????????
g. s becomes AB, n becomes ???, x becomes ???, s becomes C456 // Crashes actually
h. s becomes AB, n becomes ???, x becomes ???, s becomes C // Crashes actually
*/
