## Compiler Project
![Logo](/logo.png)

## How To run
 run these commands:
```
win_flex -o scanner.cpp .\pythonTokens.l
win_bison -d -o parser.cpp parser.y
g++ ast.cpp scanner.cpp parser.cpp -o myapp
```

## How to test
- write your code into `test.txt`
- run `myapp < test.txt > p1.gv`
- run `dot -Tpng -op1.png p1.gv`