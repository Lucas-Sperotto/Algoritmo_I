Program Idade;

uses crt;

var A : integer;
    P, J : real;

begin
     clrscr;
     writeln ('Pedro mede: 1.50m');
     writeln ('Joao mede: 1.10m');
     P := 1.5;
     J := 1.1;
     A := 0;
     while (J <= P) do
           begin
                P := P+0.02;
                J := J+0.03;
                A := A+1;
           end;
     writeln ('O numero de anos para que Joao seja maior que Pedro e: ',A);
     readkey;
end.