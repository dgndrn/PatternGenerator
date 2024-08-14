# PatternGenerator

<p>PatternGenerator uygulaması bellek taşmalarını gözlemleyebilmek için patternler üretir ve taşan değeri hesaplayarak offseti bulmayı sağlar. </p>


<p>PatternGenerator tool purpose is creating patterns for finding overflow offsets in memory and calculates offset. </p>


For compiling binary you can use   `gcc binary -w -o outputfile`

## usage


  `./pattern [pattern size]`

  ![](img/pattern.png)

  `./findoffset key pattern_size`

  ![](img/findoffset.png)


  `./fohex hex_key pattern_size`

  ![](img/fohex.png)

