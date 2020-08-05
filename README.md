对[7个示例科普CPU CACHE]()的几个测试. 示例2的 C 和 GO 的代码跑下来, cache line 对不上

```
[~/Projects/10249 on master]
% gcc 2.c                                                                                            ✭
[~/Projects/10249 on master]
% ./a.out                                                                                            ✭
test 1	0.2060
test 2	0.1615
test 4	0.1357
test 8	0.1334
test 16	0.1207
test 32	0.1180
test 64	0.1174
test 128	0.1106
test 256	0.1208
test 512	0.1093
test 1024	0.1095
test 2048	0.0560
test 4096	0.0300
test 8192	0.0144
test 16384	0.0069
test 32768	0.0037
[~/Projects/10249 on master]
% go run 2.go                                                                                        ✭
test 1	83.518
test 2	100.018
test 4	84.684
test 8	88.498
test 16	53.378
test 32	26.754
test 64	17.384
test 128	9.1
test 256	5.008
test 512	2.114
test 1024	1.267
test 2048	0.657
test 4096	0.511
test 8192	0.394
test 16384	0.219
test 32768	0.095
```

示例3

```
% go run 3.go                                                                                        ✭
test 1024	297
test 2048	307
test 4096	302
test 8192	302
test 16384	300
test 32768	316
test 65536	300
test 131072	300
test 262144	326
test 524288	362
test 1048576	416
test 2097152	555
test 4194304	442
test 8388608	669
test 16777216	754
test 33554432	793
test 67108864	872
test 134217728	1600
test 268435456	3622
test 536870912	3399
test 1073741824	3219
[~/Projects/10249 on master]
% gcc 3.c                                                                                            ✭
[~/Projects/10249 on master]
% ./a.out                                                                                            ✭
test 1024	0.1159
test 2048	0.1183
test 4096	0.1169
test 8192	0.1176
test 16384	0.1189
test 32768	0.1227
test 65536	0.1202
test 131072	0.1201
test 262144	0.1229
test 524288	0.1255
test 1048576	0.1409
test 2097152	0.1559
test 4194304	0.1623
test 8388608	0.1664
test 16777216	0.2277
test 33554432	0.3027
test 67108864	0.3487
test 134217728	0.4360
test 268435456	0.6192
test 536870912	0.9904
test 1073741824	0.9827
```

示例4完全符合.
