library IEEE;
Use IEEE.std_logic_1164.all;

Entity MOD12 is
    Port( PulseIn:in std_logic;
          Q:out std_logic_vector(3 downto 0));
End MOD12;

Architecture ARCH of MOD12 is
    component DFF1
        Port( CL,CK,T:in std_logic;
              Q,Qbar:out std_logic);
        End Component ;
        Signal CL: std_logic;
        Signal TMP1: std_logic_vector(4 downto 0) ;
        Signal TMP2: std_logic_vector(3 downto 0) ;
Begin
    TMP1(0) <= PulseIn;
    LP1:For I in 0 to 3 Generate
       U: DFF1 Port Map (CL, TMP1(I), '1', TMP2(I), TMP1(I+1));
    End Generate;
    CL <= TMP2(3) and TMP2(2);
    Q <= TMP2;
ENd ARCH;