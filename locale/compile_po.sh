cd $1
for i in $(ls -d */) 
do 
        mkdir $2/$i
        mkdir ../$i
        msgfmt ./$i'messages.po' -o $2/$i'messages.mo'
        msgfmt ./$i'messages.po' -o ../$i'messages.mo'
done
