homem(bart).
homem(homer).
homem(abraham).
mulher(marge).
mulher(lisa).
mulher(maggie).
parental(homer,bart).
parental(homer,lisa).
parental(homer,maggie).
parental(marge,bart).
parental(marge,lisa).
parental(marge,maggie).
parental(abraham, homer).

parental(josie, abraham).
parental(john, josie).

mae(X,Y):- mulher(X),
	   parental(X,Y).
pai(X,Y):- homem(X),
	   parental(X,Y).
filho(X,Y):- parental(Y,X).
neto(X,Y):- parental(W,X),
	    parental(Y,W).
ancestral(X,Y):- parental(X,Y).
ancestral(X,Y):- parental(X,W), ancestral(W,Y).

