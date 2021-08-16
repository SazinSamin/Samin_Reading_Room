All pattern searching algorithm included this link -> https://www.tutorialspoint.com/introduction-to-pattern-searching-algorithms


Boyer-Moore: works by pre-analyzing the pattern and comparing from right-to-left. If a mismatch occurs, the initial analysis is used to determine how far the pattern can be shifted w.r.t. the text being searched. This works particularly well for long search patterns. In particular, it can be sub-linear, as you do not need to read every single character of your text.


Knuth-Morris-Pratt(KMP): also pre-analyzes the pattern, but tries to re-use whatever was already matched in the initial part of the pattern to avoid having to rematch that. This can work quite well, if your alphabet is small (f.ex. DNA bases), as you get a higher chance that your search patterns contain reuseable subpatterns.



Aho-Corasick(extension of KMP): Needs a lot of preprocessing, but does so for a number of patterns. If you know you will be looking for the same search patterns over and over again, then this is much better than the other, because you need to analyse patterns only once, not once per search



RabinKarp is an algorithm of choice for multiple pattern search.
