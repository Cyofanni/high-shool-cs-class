expr = '2 2 + 3 4 *';
stack = [];

for (i = 0; i < expr.length; i++) {
    if (expr[i] != ' ' && expr[i] != '+'  && expr[i] != '*'
        && Number(expr[i]) != NaN) {
        stack.push(Number(expr[i]));
    }
    else if (expr[i] == '+' || expr[i] == '*') {
        if (expr[i] == '+') {
	    ans = 0;
	}
	else if (expr[i] == '*') {
	    ans = 1;
	}
        for (j = stack.length - 1; j >= 0; j--) {
	    if (expr[i] == '+') {
		ans += Number(stack[j]);
	    }
	    else if (expr[i] == '*') {
		ans *= Number(stack[j]);
	    }
	    stack.pop();
	}
	stack.push(ans);
    }
}

console.log(stack);
