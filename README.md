# learning-qt-game
Learn developing game 
Работа с gitHub репозиторием с локальной машины:
1 Необходимо склонировать проект в bash эмуляторе git в выбранную папку, для этого:
переходим в нужную папку 
команда  cd C:/Users/ITPRO/Documents/CPP  // обратите внимание, слеши разделения директорий в эмуляторе д.б /
клонируем репозиторий
команда git clone https://github.com/alex3413/learning-qt-game.git

В qt creator открываем проект, выбрав файл CmakeList.txt в директории проекта
2. Создаем свою ветку в локальном хранилище, т.е. в папке с проектом
![image](https://user-images.githubusercontent.com/43061445/119115551-f4e7e700-ba2f-11eb-9e8a-0eb3637de638.png)
далее, нажимаем правой кнопкой мышки
![image](https://user-images.githubusercontent.com/43061445/119115681-1cd74a80-ba30-11eb-9fda-a77f23bcea35.png)
далее пишем имя ветки, только латинские символы без пробелов, лучше назвать, чтоб, все остальные поняли, чье это
![image](https://user-images.githubusercontent.com/43061445/119115809-409a9080-ba30-11eb-9921-3e79e56bee23.png)
далее пишем код всегда в своей ветке, активная ветка подсвечена жирным шрифтом 
![image](https://user-images.githubusercontent.com/43061445/119116321-ccacb800-ba30-11eb-851b-64d494d9cc5e.png)
создаем удаленную ветку в репозитории, желательно с таким же именем как и локально.
![image](https://user-images.githubusercontent.com/43061445/119118722-2c0bc780-ba33-11eb-9669-2fdad8890ccc.png)

После внесенных изменений их нужно зафиксировать (закоммитить) см. п3

3. Для фиксации внесенных изменений и доставки в репозиторий
 1.После, того как внесли изменения, выбираем
 ![image](https://user-images.githubusercontent.com/43061445/119114199-9a9a5680-ba2e-11eb-9167-88f0b512ec46.png)
 далее пишем комментарий к коммиту, ставим галочку на тех файлах, которые хотим зафиксировать(commit) и нажимаем зафиксировать
 ![image](https://user-images.githubusercontent.com/43061445/119115174-8efb5f80-ba2f-11eb-8f36-a9099f83229d.png)
 далее открываем bash
 ![image](https://user-images.githubusercontent.com/43061445/119116543-041b6480-ba31-11eb-937e-1fa7c13811c3.png)
пишем  команду
git push origin <имя своей удаленной ветки>:<имя своей локальной ветки>
![image](https://user-images.githubusercontent.com/43061445/119118398-d1726b80-ba32-11eb-8486-301b378a7ff9.png)

