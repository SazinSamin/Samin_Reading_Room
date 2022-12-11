echo 'get a http response.....\n'
curl https://www.google.com


for i in {1, 15}
do 
	echo "------------------------"
done


echo 'verbose output\n'
curl -v https://www.google.com
