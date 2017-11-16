# lifetime_analysis
Lifetime measurements of ortho-positronium  
オルソポジトロニウムの寿命測定

![example of result](https://user-images.githubusercontent.com/23211788/32871490-ab600b16-cac4-11e7-967a-a3b242927f38.png)

* データファイルは重すぎてアップはできない。（だいたい1000万データ）
* データ解析には高エネルギー物理では有名なCERNのROOTという高機能ライブラリを使っている。
* 念のためROOTインストール方法  
1. ソースからmakeしてもいいが、CERNのサイトにバイナリがおいてあるはずなので、OSに合わせ、例えばホームディレクトリへインストール。
2. コマンドラインで使うためにシェルの設定ファイルへ次のコードを追加。
```
ROOTSYS=~/root_v6.10.08 #versionはファイルに合わせて
export PATH=${ROOTSYS}/bin:${PATH}
export DYLD_LIBRARY_PATH=${ROOTSYS}/lib:${DYLD_LIBRARY_PATH}
export PYTHONPATH=${ROOTSYS}/lib:${PYTHONPATH} #pythonでもimportできるようになる(pythonpathに追加)
```
      
  　
