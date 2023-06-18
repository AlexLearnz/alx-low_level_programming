- C Variables,if-else,while 
- Coding in linux kernel coding style
- Betty Style encouraged
- Always end with a new line
- No error nor warning

Additions:
- Turns out while loop was what I had to focus on most with this week's tasks
- Unless the question stated it, I should have focused mostly on using while loops
- for loops question in the quiz👀
- putchar() is designed to work with characters. 
- It  takes int arguments and outputs the corresponding character(man ASCII)
e.g putchar(48) => 0

~ putchar('') is used to print out SINGLE characters
e.g putchar('c') || putchar ('3') ✅
BUT putchar('abc') || putchar ('123') ❌

... putchar('0' + 9) => 9, putchar('0' + 49) => a
... '0' has decimal value of 48
SO {48}+9=57 == '9' && {48}+49=97 == 'a'

~ '0' - '9' == 48 - 57 in ASCII decimal values
~ 'a' - 'z' == 97 - 122 in ASCII decimal values
~ 'A' - 'Z' == 65 - 90 in ASCII decimal values

