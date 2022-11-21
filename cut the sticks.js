var arr = [5,4,4,2,2,8];

function cutTheSticks(arr) {
	var answer = new Array();
	do{
		answer.push(arr.length);
		var cut_value = Math.min(...arr);
		arr = arr.filter(function(x){
			return x !== cut_value;
		});
		for (var i = 0; i < arr.length; i++){
			arr[i] -= cut_value;
		}
	}while(arr.length != 0);
	return answer;
}
console.log(cutTheSticks(arr));