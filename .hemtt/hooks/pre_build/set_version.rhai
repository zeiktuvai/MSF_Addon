let modver = HEMTT_RFS.join("addons").join("main").join("script_version.hpp").open_file().read();
modver.replace("BUILD " + HEMTT.project().version().build(), "BUILD " + (HEMTT.project().version().build() + 1));
HEMTT_RFS.join("addons").join("main").join("script_version.hpp").create_file().write(modver);

let modcpp = HEMTT_VFS.join("mod.cpp").open_file().read();
let verfile = HEMTT_VFS.join("version").open_file().read();
let ver = HEMTT.project().version().major() + "." + HEMTT.project().version().minor() + "." + HEMTT.project().version().patch() + "." + (HEMTT.project().version().build() + 1);

if HEMTT.is_release() {
    modcpp.replace("0.0.0", ver);
    verfile.replace("0.0.0", ver);
} else {
    let devver = ver + " - Dev Build";
    modcpp.replace("0.0.0", devver);
    verfile.replace("0.0.0", devver);
}

HEMTT_VFS.join("mod.cpp").create_file().write(modcpp);
HEMTT_VFS.join("version").create_file().write(verfile);