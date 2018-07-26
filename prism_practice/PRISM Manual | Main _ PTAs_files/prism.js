function initialise()
{
	var nav = document.getElementById("prism-navbar");
	var navItems = nav.getElementsByTagName("li");
	for (var i = 0; i < navItems.length; i++) {
		if (navItems[i].className == "prism-navitem" || navItems[i].className == "prism-navitemsel") {
			navItems[i].onmouseover = function() { navShow(this) };
			navItems[i].onmouseout = function() { navHide(this) };
		}
	}
}

function navShow(navItem)
{
	// Change menu item style + show submenu
	var anchor = navItem.getElementsByTagName("a")[0];
	var subMenus = navItem.getElementsByTagName("ul");
	if (subMenus.length > 0) {
		anchor.className = "prism-navitemhover";
		subMenu = subMenus[0];
		subMenu.style.display = "block";
	} else {
		anchor.className = "prism-navitemhoverempty";
	}
}

function navHide(navItem)
{
	// Revert menu item style + hide submenu
	var anchor = navItem.getElementsByTagName("a")[0];
	anchor.className = "";
	var subMenus = navItem.getElementsByTagName("ul");
	if (subMenus.length > 0) {
		subMenu = subMenus[0];
		subMenu.style.display = "none";
	}
}

