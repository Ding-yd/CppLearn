C++学习记录

一git仓库的管理
一)、配置SSH连接
1.在本地安装好git bash或者git gui
2. git config --global user.name “用户名”  git config --global user.email “邮箱“ //git绑定github账号
3. ssh-keygen -t rsa -C “邮箱” 创建ssh连接
4. 在 .../usr/用户名/.ssh/id_rsa.pub  查看对应的ssh key，并在github项目仓库中配置ssh key
二)、将本地的项目放入仓库中
1. git init -b 分支名字 //初始化等待存放文件夹为git可管理的文件夹，并定义放入哪个分支
2. git add . //选择放入仓库的文件， .表示全部
3. git commit -m "注释" //把文件提交到仓库，双引号内是提交注释。可有可无
4. git remote add origin "ssh连接或者https连接"// 与对应的仓库进行关联
5. git push -u origin main(分支名字) //将本地代码上传到仓库
三)、更新仓库的文件
1. git pull origin 分支名 --allow-unrelated-histories //拉取对应的仓库分支
2. git add 文件名 //更新的文件
3. git commit -m "注释" //更改注释
4. git push -u origin 分支名 //更新对应的仓库分支


**Cmake
cmake项目中新增库文件，需要find_packages 找文件,target_link_libraries连接文件
                            
                        
**参考链接：https://blog.csdn.net/weixin_45178274/article/details/129632433**
