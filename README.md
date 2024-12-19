# opencv-mobile_jpg-streaming_test

## abst
opencv-mobileにjpg-streamingというものがあります。<br>
これはopencv-mobileのpull/161で開発のものです。<br>
こちらは現在、開発者のnihui氏によって、APIの調整や最適化を行われている最中で実装途中のものとなります。<br>
先行して、opencv-mobileのhttp jpg streaming ビルドし、お試しました。<br>


https://github.com/nihui/opencv-mobile/pull/161<br>
https://x.com/nihui/status/1864892917300760905<br>

## Enviroment

```
$  lsb_release -a
No LSB modules are available.
Distributor ID: Ubuntu
Description:    Ubuntu 22.04.4 LTS
Release:        22.04
Codename:       jammy
```

## opencv-mobileのビルド
opencv-mobileのjpg-streamingのブランチをダウンロードします。

```
$ git clone https://github.com/nihui/opencv-mobile.git -b jpg-streaming
```

こちらのスクリプトをダウンロードして、OpenCVにパッチを当てます。

```
$ cd opencv-mobile
$ curl -O https://raw.githubusercontent.com/nnn112358/opencv-mobile_jpg-streaming_test/main/opencv-mobile-build.sh
$ chmod +x opencv-mobile-build.sh
```

opencv-mobileのコンパイルを行います。

```
$ cd opencv-mobile-4.10.0
$ cmake -B build/x64 -DCMAKE_TOOLCHAIN_FILE=../toolchains/aarch64-linux-gnu.toolchain.cmake \
    `cat ./options.txt` -DBUILD_opencv_world=OFF .
$ cmake --build build/x64
$ cmake --install build/x64 --prefix install/aarch64-linux-gnu
```

aarch64向けにopencv-mobileのクロスコンパイルを行います。

```
$ cmake -B build/aarch64 -DCMAKE_TOOLCHAIN_FILE=../toolchains/aarch64-linux-gnu.toolchain.cmake \
    `cat ./options.txt` -DBUILD_opencv_world=OFF .
$ cmake --build build/aarch64
$ cmake --install build/aarch64 --prefix install/aarch64-linux-gnu
```












