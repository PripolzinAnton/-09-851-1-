const c=10000;
var A:array [1..c] of integer; var n,count,b,d:integer;
procedure qSort(nStart, nEnd: integer);
var L, R, c, X: integer;
begin
  if nStart >= nEnd then Exit;
  L:= nStart; R:= nEnd;
  X:= A[(L+R) div 2]; 
  while L <= R do begin 
    while A[L]<  X  do L:= L + 1;
    while A[R]>  X do R:= R - 1;
    if (L <= R) then begin
      c:= A[L]; A[L]:= A[R]; A[R]:= c;
      L:= L+1; R:= R-1
    end
  end;
  qSort(nStart, R); 
  qSort(L, nEnd)
end;
begin
read (n);
for i:integer:=1 to n do
read (A[i]);
qSort (1,n);
count:=1;b:=0;d:=0;
for i:integer:=1 to n do
write(A[i],' ');
for i:integer:=1 to n-1 do 
begin if A[i]<>A[i+1] then count+=1;
end;
writeln(' '); write(count);
end.