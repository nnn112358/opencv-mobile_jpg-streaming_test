# opencv-mobile_jpg-streaming_test

## abst
opencv-mobileにjpg-streamingというものがあります。
これはopencv-mobileのpull/161で開発のものです。
こちらは現在、開発者のnihui氏によって、APIの調整や最適化を行われている最中で実装途中のものとなります。
先行して、http jpg streaming を試しました。

There is a branch of OpenCV-Mobile called http jpg streaming, which implements a feature under development in pull/161.
This is currently being implemented by nihui, who is in the process of adjusting and optimizing the API.
I tried http jpg streaming ahead of time.

https://github.com/nihui/opencv-mobile/pull/161
https://x.com/nihui/status/1864892917300760905


## opencv-mobile build
jpg-streamingのブランチをダウンロードします。

```
$ git clone https://github.com/nihui/opencv-mobile.git -b jpg-streaming
```

こちらのスクリプトをダウンロードして、OpenCVにパッチを当てます。

```
$ cd opencv-mobile
$ curl -O https://raw.githubusercontent.com/nnn112358/opencv-mobile_jpg-streaming_test/main/opencv-mobile-build.sh
$ chmod +x opencv-mobile-build.sh
```



```
$ cd opencv-mobile-4.10.0
$ cmake -B build/x64 -DCMAKE_TOOLCHAIN_FILE=../toolchains/aarch64-linux-gnu.toolchain.cmake \
    `cat ./options.txt` -DBUILD_opencv_world=OFF .
$ cmake --build build/x64
$ cmake --install build/x64 --prefix install/aarch64-linux-gnu
```



```
$ cmake -B build/aarch64 -DCMAKE_TOOLCHAIN_FILE=../toolchains/aarch64-linux-gnu.toolchain.cmake \
    `cat ./options.txt` -DBUILD_opencv_world=OFF .
$ cmake --build build/aarch64
$ cmake --install build/aarch64 --prefix install/aarch64-linux-gnu
```












