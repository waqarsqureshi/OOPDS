SRC= $(wildcard *.tex)

TARGPDF=$(SRC:.tex=.pdf)

all: $(TARGPDF)

%.pdf: %.tex
	pdflatex $<
	pdflatex $<

clean:
	rm -f *.aux *.log $(TARGPDF) *.dvi *~

