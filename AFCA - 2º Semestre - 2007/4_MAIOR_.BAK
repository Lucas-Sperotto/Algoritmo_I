program Maior_de_tres;

uses crt;

var A, B, C, M : real;

begin
     clrscr;
     repeat
           writeln('Digite tres valores diferentes');
           write('Digite o primeiro valor: '); readln(A);
           write('Digite o segundo valor: '); readln(B);
           write('Digite o terceiro valor: '); readln(C);
           if (A <> B) and (A <> C) and (B <> C) then
              begin
                   if (A > B) and (A > C) then
                      writeln('O maior dos tres numeros e: ', A:6:2);
                   if (B > A) and (B > C ) then
                      writeln('O maior dos tres numeros e: ', B:6:2);
                   if (C > A) and (C > B) then
                      writeln('O maior dos tres numeros e: ', C:6:2);
              end;
     until (A <> B) and (A <> C) and (B <> C);
     readkey;
end.