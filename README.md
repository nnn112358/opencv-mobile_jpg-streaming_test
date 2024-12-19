# opencv-mobile_jpg-streaming_test

## abst
というものがあり、これはpull/161で開発中の機能を実装したものです。
こちらは現在、nihui氏によって、APIの調整や最適化を行われている最中で実装途中のものとなります。
先行して、http jpg streaming を試しました。

There is a branch of OpenCV-Mobile called http jpg streaming, which implements a feature under development in pull/161.
This is currently being implemented by nihui, who is in the process of adjusting and optimizing the API.
I tried http jpg streaming ahead of time.

https://github.com/nihui/opencv-mobile/pull/161
https://x.com/nihui/status/1864892917300760905


## opencv-mobile build
jpg-streamingのブランチをダウンロードしてﾋﾞﾙﾄﾞを行います。
Download and build the jpg-streaming branch.

```
$ git clone https://github.com/nihui/opencv-mobile.git -b jpg-streaming
$ cd opencv-mobile
$ curl -O https://raw.githubusercontent.com/nnn112358/opencv-mobile_jpg-streaming_test/main/opencv-mobile-build.sh
$ chmod +x opencv-mobile-build.sh
```




