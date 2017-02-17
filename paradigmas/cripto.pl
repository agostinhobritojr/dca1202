digito(0).
digito(1).
digito(2).
digito(3).
digito(4).
digito(5).
digito(6).
digito(7).
digito(8).
digito(9).

puzzle(Cor, Bol, Pre, Est, Lua, Rep):-
    digito(Cor), digito(Bol),
    digito(Pre), digito(Est),
    digito(Lua), digito(Rep),
    Cor =\= 0,
    Bol =\= 0,
    Est =\= 0,
    Rep =\= 0,
    Pre =\= 0,
    Cor =\= Bol, Cor =\= Est,
    Cor =\= Rep, Cor =\= Pre,
    Cor =\= Lua,

    Bol =\= Rep, Bol =\= Pre,
    Bol =\= Lua, Bol =\= Est,

    Est =\= Rep, Est =\= Pre,
    Est =\= Lua,

    Rep =\= Pre, Rep =\= Lua,

    Pre =\= Lua,
    
    10*Cor+Cor + 10*Bol+Pre =:= 10*Est + Lua,
    10*Rep+Bol + Cor =:= 10*Rep+Est,
    10*Pre+Bol + 10*Pre+Cor =:= 10*Rep+Est,
    11*Cor - 10*Rep-Bol =:= 10*Pre+Bol,
    10*Bol+Pre - Cor =:= 10*Pre+Cor,
    10*Est+Lua - 10*Rep-Est =:= 10*Rep+Est.
    
