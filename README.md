# transcall-3.5.1
## 備考
* ネストした仮想化に対応
	* 仮想化ソフトウェア:Xen-4.4.0

* Transcallの実行のしかたは以下のように実行する
	* scriptディレクトリの中のvm_shadow.shというスクリプトを使って実行する

```sh
// (スクリプト)　(マウントするイメージ) (ホストVMのID) (ユーザVMのID)

./vm_shadow.sh /mnt/fs/mnt_img/disk.img 1 123

```
* VMのタグを16進数に対応させた

```sh
// (スクリプト)　(マウントするイメージ) (ホストVMのID) (ユーザVMのID)

./vm_shadow.sh /mnt/fs/mnt_img/disk.img 1 0xaaaa1234

```
