# sampleLangC

## 100本ノック
```
$ docker build -t alpine:exec-c .
$ docker run -v "$PWD"/knock_100:/home --rm -ti alpine:exec-c
# cd /home
# gcc knock_080.c -o knock080.out
# ./knock080.out
```

## web課題
```
$ docker build -t alpine:exec-c .
$ docker run -v "$PWD"/kadai:/home --rm -ti alpine:exec-c
# cd /home
# gcc kadai02_01.c -o kadai02_01.out
# ./kadai02_01.out
```

```
$ docker build -t alpine:exec-c .
$ docker run -v "$PWD"/ComprehensiveSeminar:/home --rm -ti alpine:exec-c
```
## 追加総合演習３
```
# cd /home
# gcc exercise13.c getFunc.c
# ./a.out
```
## 総合演習4
```
# cd /home
# gcc exercise04.c dayDuty.c getFunc.c studentMaster.c
# ./a.out
```
## 総合演習3
```
# cd /home
# gcc exercise03.c itemMaster.c
# ./a.out
```
## 総合演習2
```
# cd /home
# gcc exercise02.c examineArray.c getFunc.c
# ./a.out
```
## 総合演習1
```
# gcc exercise01.c getFunc.c
# ./a.out
```