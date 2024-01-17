win_flex -o scanner.cpp pythonTokens.l
win_bison -d -o parser.cpp parser.y
g++ ast.cpp scanner.cpp parser.cpp -o myapp
myapp < example.py > p1.gv
dot -Tpng -op1.png p1.gv