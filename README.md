CeedlingUnitTest
=================

Ceedling,Unity,CMockの勉強用リポジトリ。

CMockとは
----------------
C言語用のMockフレームワーク。

Unityとは
---------
C言語用のテストフレームワーク。

TEST_ASSERT_EQUAL_INT等の他のテスト用関数は下記を参照。  
[Unity Summary](https://github.com/ThrowTheSwitch/Unity/blob/master/docs/Unity%20Summary.txt)

Ceedlingとは
------------
UnityとCMockを使ってテストを実行するためのテスト管理用フレームワーク。

ディレクトリ構成
-----------------
```
.  
├── README.md  
├── RemoteSystemsTempFiles  
├── Vagrantfile  
├── app  
│   ├── app1  
│   │   ├── Debug <--------------製品コードのMakefile格納ディレクトリ  
│   │   ├── build <--------------テスト用のコード等が自動生成される  
│   │   ├── project.yml <--------Ceedling用の設定  
│   │   ├── rakefile.rb <--------テスト用のRrakefile  
│   │   ├── src  
│   │   │   ├── calc1.c <--------テスト対象(製品コード)  
│   │   │   ├── calc1.h  
│   │   │   └── main.c  
│   │   └── test <---------------テストコードを格納するディレクトリ  
│   │       ├── support  
│   │       └── test_calc1.c <---テストコード  
│   ├── app2  
│   │   ├── Debug   
│   │   ├── build  
│   │   ├── project.yml  
│   │   ├── rakefile.rb  
│   │   ├── src  
│   │   │   ├── calc2.c <--------テスト対象  
│   │   │   ├── calc2.h  
│   │   │   └── main.c  
│   │   └── test  
│   │       ├── support  
│   │       └── test_calc2.c <---テストコード  
│   └── bin  
├── package  
│   ├── Debug  
│   ├── Release  
│   ├── include  
│   │   └── libpackage.h  
│   ├── lib  
│   └── src  
│       └── libpackage.c <--------テスト対象が呼び出すパッケージ  
├── tools  
　   └── ceedling         <--------Ceedling,Unity,CMockのインストールディレクトリ  
　       ├── project.yml  
　       ├── rakefile.rb  
　       └── vendor  
　       └── ceedling  
```

chef-soloのインストール
------------------------
```sh
$bundle install
```

Vagrantの起動
-------------
```sh
$vagrant up
$vagrant ssh-config --host ceedling >> ~/.ssh/config
```

Chef-soloにてゲストOSにruby,rubygems,ceedlingをインストール
------------------------------------------------------------
```sh
$cd chef
$bundle exec knife bootstrap ceedling
```

テストの実行
-------------
project.yml、rakefile.rbのあるディレクトリで下記コマンドを実行。

```sh
$rake test:all
```
