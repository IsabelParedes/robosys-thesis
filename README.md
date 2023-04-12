Rendered document $\rightarrow$ **main.pdf**

# IGMR thesis template

To use the template for your thesis, you have to download this repository as a zip-file and put it into your thesis directory.

With every push to the IGMR GitLab server you will get a complete formatted LaTeX document in the CI-Section of your thesis repository.

## Change language

The IGMR LaTeX package contains multilanguage support for english and german. To change the language from german to english, you have to change it in line 51:

** German version **
```
\documentclass[
    ...
    ngerman,
    ...
]
```

** English version **
```
\documentclass[
    ...
    english,
    ...
]
```

HInt:
In case, "scrpage2" package was not fond, use "scrlayer-scrpage" in "igm.sty" instead.
