# C: Shape Drawing (ASCII Art)

## Description

ASCII art uses characters such as `*` and `_` to create different shapes using loops, conditions, and formatted printing.

This project contains different shape-drawing functions written in C. Each function accepts one parameter:

```c
int number
```

The value of `number` is always assumed to be an odd number greater than 3.

All shapes are printed using a combination of:

* `*` (asterisk)
* `_` (underscore)

## Requirements

* C Compiler (GCC / MinGW / MSYS2)
* Any C IDE or editor (Visual Studio Code recommended)

## Functions

| #  | Function Name                 | Description                        |
| -- | ----------------------------- | ---------------------------------- |
| 1  | `DrawLine`                    | Draws a straight line              |
| 2  | `DrawStripedLine`             | Draws a striped line               |
| 3  | `DrawSquare`                  | Draws a square                     |
| 4  | `DrawParallelogram`           | Draws a parallelogram              |
| 5  | `DrawTriangle`                | Draws a triangle                   |
| 6  | `DrawReverseTriangle`         | Draws a reverse triangle           |
| 7  | `DrawIsocelesTriangle`        | Draws an isosceles triangle        |
| 8  | `DrawReverseIsocelesTriangle` | Draws a reverse isosceles triangle |
| 9  | `DrawHourGlass`               | Draws an hourglass shape           |
| 10 | `DrawDiamond`                 | Draws a diamond shape              |
| 11 | `DrawZero`                    | Draws a zero shape                 |
| 12 | `DrawArrowUp`                 | Draws an upward arrow              |
| 13 | `DrawArrowDown`               | Draws a downward arrow             |
| 14 | `DrawX`                       | Draws an X shape                   |
| 15 | `DrawBowTie`                  | Draws a bow tie shape              |

---

# Example Output

## DrawLine

Input:

```
5
```

Output:

```
*****
```

Input:

```
7
```

Output:

```
*******
```

---

## DrawStripedLine

Input:

```
5
```

Output:

```
*_*_*
```

Input:

```
7
```

Output:

```
*_*_*_*
```

---

## DrawSquare

Input: `5`

```
*****
*****
*****
*****
*****
```

Input: `7`

```
*******
*******
*******
*******
*******
*******
*******
```

---

## DrawTriangle

Input: `5`

```
*****
****_
***__
**___
*____
```

Input: `7`

```
*******
******_
*****__
****___
***____
**_____
*______
```

---

## DrawDiamond

Input: `5`

```
__*__
_***_
*****
_***_
__*__
```

Input: `7`

```
___*___
__***__
_*****_
*******
_*****_
__***__
___*___
```

---

## Notes

* All functions are stored in one `.c` file.
* The program uses loops and conditions to generate each pattern.
* The size parameter controls the width and height of the shapes.

## Author

Created as a C programming exercise for ASCII pattern drawing.
