# lifetime_analysis
Lifetime measurements of ortho-positronium
オルソポジトロニウムの寿命測定

* データファイルは重すぎてアップはできない。（だいたい1000万データ）
* データ解析には高エネルギー物理では有名なCERNのROOTという高機能ライブラリを使っています。
* 念のためROOTインストール方法  
1. ソースからmakeしてもいいが、CERNのサイトにバイナリがおいてあるはずなので、OSに合わせて例えばホームディレクトリへインストール。
2. コマンドラインで使うためにシェルの設定ファイルへ次のコードを追加。
```
ROOTSYS=~/root_v6.10.08 #versionはファイルに合わせて
export PATH=${ROOTSYS}/bin:${PATH}
export DYLD_LIBRARY_PATH=${ROOTSYS}/lib:${DYLD_LIBRARY_PATH}
export PYTHONPATH=${ROOTSYS}/lib:${PYTHONPATH} #pythonでもimportできるようになる(pythonpathに追加)
```
      
  　
