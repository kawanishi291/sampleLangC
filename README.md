# sampleLangC


```
$ docker build -t alpine:exec-c .
$ docker run -v "$PWD"/sample_program:/home --rm -ti alpine:exec-c

# cd /home
# gcc sample01.c
# ./a.out
```