$(function() {
	var firstpic = $(".detail_picbot_mid ul li").first().find("img");
	var firstsrc = firstpic.attr("bigimg");
	var firsttxt = firstpic.attr("text");
	$("#pic1").attr("src", firstsrc);
	firstpic.addClass("selectpic");
	$(".miaoshu").text(firsttxt);
	$("#preArrow").hover(function() {
		$("#preArrow_A").css("display", "block")
	}, function() {
		$("#preArrow_A").css("display", "none")
	});
	$("#nextArrow").hover(function() {
		$("#nextArrow_A").css("display", "block")
	}, function() {
		$("#nextArrow_A").css("display", "none")
	});

	function preclick() {
		var currrentindex = parseFloat($("#pic1").attr("curindex"));
		if (currrentindex != 0) {
			var curli = $(".detail_picbot_mid ul li").eq(currrentindex);
			var length = $(".detail_picbot_mid ul li").length;
			if (currrentindex <= (length - 6)) {
				$(".detail_picbot_mid ul li").eq(currrentindex + 5).css("display", "none");
				$(".detail_picbot_mid ul li").eq(currrentindex - 1).css("width", "100px").css("display", "block")
			}
			var curnextli = $(".detail_picbot_mid ul li").eq(currrentindex - 1);
			var curnextsrc = curnextli.find("img").attr("bigimg");
			var curnexttxt = curnextli.find("img").attr("text");
			curli.find("img").removeClass("selectpic");
			curnextli.find("img").addClass("selectpic");
			$("#pic1").attr("src", curnextsrc);
			$(".miaoshu").text(curnexttxt);
			$("#pic1").attr("curindex", currrentindex - 1)
		} else {
			$(".bodymodal").css("display", "block");
			$(".firsttop").css("display", "block")
		}
	}
	$("#preArrow_B").click(function() {
		preclick()
	});
	$("#preArrow").click(function() {
		preclick()
	});
	$("#nextArrow_B").click(function() {
		nextclick()
	});
	$("#nextArrow").click(function() {
		nextclick()
	});

	function nextclick() {
		var currrentindex = parseFloat($("#pic1").attr("curindex"));
		var length = $(".detail_picbot_mid ul li").length;
		if (currrentindex != (length - 1)) {
			var curli = $(".detail_picbot_mid ul li").eq(currrentindex);
			if (currrentindex > 4) {
				$(".detail_picbot_mid ul li").eq(currrentindex - 5).css("display", "none");
				$(".detail_picbot_mid ul li").eq(currrentindex + 1).css("width", "100px").css("display", "block")
			}
			var curnextli = $(".detail_picbot_mid ul li").eq(currrentindex + 1);
			var curnextsrc = curnextli.find("img").attr("bigimg");
			var curnexttxt = curnextli.find("img").attr("text");
			curli.find("img").removeClass("selectpic");
			curnextli.find("img").addClass("selectpic");
			$("#pic1").attr("src", curnextsrc);
			$("#pic1").attr("curindex", currrentindex + 1);
			$(".miaoshu").text(curnexttxt)
		} else {
			$(".bodymodal").css("display", "block");
			$(".endtop").css("display", "block")
		}
	}
	
	$(".detail_picbot_mid ul li").click(function() {
		var currentliindex = $(this).index(".detail_picbot_mid ul li");
		$(".detail_picbot_mid ul li img[class='selectpic']").removeClass("selectpic");
		var currentli = $(".detail_picbot_mid ul li").eq(currentliindex);
		currentli.find("img").addClass("selectpic");
		var bigimgsrc = currentli.find("img").attr("bigimg");
		var curnexttxt = currentli.find("img").attr("text");
		$("#pic1").attr("src", bigimgsrc);
		$("#pic1").attr("curindex", currentliindex);
		$(".miaoshu").text(curnexttxt)
	});
});
