# Tutorial using the package biblatex

In this simple repo I will share my thoughts and experience using the package **biblatex**.

## basic commands and Styles

To start using the package we should add the following line into the preambule.

```latex
\usepackage{biblatex}
\addbibresource{}
```

and printing the bibliography is done by

```latex
\printbibliography
```

changing the style could be easely changed in the package options

```latex
\usepackage[citesytle=alphabetic,bibstyle=authortitle]{biblatex}
```


some useful styles to remember
* alphabetic
* **authoryear**
* reading
* alphabetic

Another important of the package is the *sorting* option:

```latex
\usepackage[style=authoryear,sorting=ynt]{biblatex}
```
type of sorts:

* nty - Sorts entries by name, title, year.
* nyt - Sorts entries by name, year, title.
* nyvt - Sorts entries by name, year, volume, title.
* anyt - Sorts entries by alphabetic label, name, year, title.
* anyvt - Sorts entries by alphabetic label, name, year, volume, title.
* ynt - Sorts entries by year, name, title.
* ydnt - Sorts entries by year (descending order), name, title.

## Citation commands

The citation commands have also been overhauled in biblatex. You can add a *prenote* and a *postnote* for the citation.

```latex
\cite[see][page 12]{latexcompanion}
```

* cite : the  basic command cite without any brackets except for the alphabetic style.
* partencite : cite using **parentheses** exept for the alphabetic.
* footcite: put the citation on the **footnote**.

## Subdividing Bibliographies
One of the nice things about **biblatex** is that you can subdivide bibliographies according to source type. Here’s an example of subdividing by source type:

```latex
\printbibheading
\printbibliography[type=book,heading=subbibliography,title={Book Sources}]
\printbibliography[nottype=book,heading=subbibliography,title={Other Sources}]
```
