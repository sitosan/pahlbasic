//Diese Funktion sucht nach dem A. Komma in String A$
//Zusätzlich wird noch ein Offset in D addiert
function Komma(A$, A, D) : 'A=Anzahl Kommas, D=ZeichenOffset
  let B = len(A$) : let E = 1
  while E<B
    if (A$(E)=",") then inc C
    if C=A then break
    inc E
  wend
  let result = E+D
end
