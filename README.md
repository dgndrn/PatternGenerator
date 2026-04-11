# Pattern Generator

<p>Pattern Generator uygulaması bellek taşmalarını gözlemlemek için pattern üretir ve taşan değeri hesaplayarak offset bulmayı sağlar. </p>


<p>
The purpose of the Pattern Generator is to create patterns in order to find overflow offsets in memory and calculate those offsets.
</p>




## Installation and Build


```
git clone https://github.com/dgndrn/PatternGenerator.git
cd PatternGenerator
make
cd build
./pattern
```

## Usage

```
Usage ./pattern [options] value1 value2 

Example uses
./pattern -p 100
./pattern -f 0Aj1 300 
./pattern -x 41386141 300

[options]
 -p : Create pattern
 -f : Find the offset within the pattern
 -x : Find the offset within the pattern in hexadecimal format
```


## Examples

```bash
$ ./pattern -p 300
###Pattern###
Aa0Aa1Aa2Aa3Aa4Aa5Aa6Aa7Aa8Aa9Ab0Ab1Ab2Ab3Ab4Ab5Ab6Ab7Ab8Ab9Ac0Ac1Ac2Ac3Ac4Ac5Ac6Ac7Ac8Ac9Ad0Ad1Ad2Ad3Ad4Ad5Ad6Ad7Ad8Ad9Ae0Ae1Ae2Ae3Ae4Ae5Ae6Ae7Ae8Ae9Af0Af1Af2Af3Af4Af5Af6Af7Af8Af9Ag0Ag1Ag2Ag3Ag4Ag5Ag6Ag7Ag8Ag9Ah0Ah1Ah2Ah3Ah4Ah5Ah6Ah7Ah8Ah9Ai0Ai1Ai2Ai3Ai4Ai5Ai6Ai7Ai8Ai9Aj0Aj1Aj2Aj3Aj4Aj5Aj6Aj7Aj8Aj9

$ ./pattern -f 0Aj1 300
offset:272

$ ./pattern -x 41386141 300
offset:24
```
