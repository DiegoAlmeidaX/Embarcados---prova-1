library STD;
USE STD.STANDARD.ALL

entity pinagem is
port(
    A, B : IN BIT;
    X : OUT BIT
    );
end pinagem;

architecture arch of pinagem is
Begin
    X <= not(A or B);
end pinagem;