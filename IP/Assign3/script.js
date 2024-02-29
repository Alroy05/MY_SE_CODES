function squareShape() {
    document.querySelector(".fig").innerHTML='<div id="shape" onmouseenter="shapeClicked()" class="square"></div>';
    console.log("square shape clicked");
}

function triangleShape(){
    document.querySelector(".fig").innerHTML='<div id="shape" onmouseenter="shapeClicked()" class="triangle"></div>';
    console.log("triangle shape clicked");
}

function rectangleShape() {
    document.querySelector(".fig").innerHTML='<div id="shape" onmouseenter="shapeClicked()" class="rectangle"></div>';
    console.log("rectangle shape clicked");
}


let shape = '';
let numTransformations = 0;

function translateShape() {
    shape = document.getElementById('shape');
    numTransformations++;
    const dx = 20 * numTransformations;
    const dy = 20 * numTransformations;
    shape.style.transform = `translate(${dx}px, ${dy}px)`;
}

function scaleShape() {
    shape = document.getElementById('shape');
    numTransformations++;
    const scale = 1 + numTransformations * 0.1;
    shape.style.transform = `scale(${scale})`;
}

function rotateShape() {
    shape = document.getElementById('shape');
    numTransformations++;
    const angle = numTransformations * 30;
    shape.style.transform = `rotate(${angle}deg)`;
}

document.getElementById('translateBtn').addEventListener('click', translateShape);
document.getElementById('scaleBtn').addEventListener('click', scaleShape);
document.getElementById('rotateBtn').addEventListener('click', rotateShape);

function shapeClicked(){
    console.log("The shape was clicked")
    shape = document.getElementById('shape');
    function moveShape(event) {
        const dx = event.clientX - initialX
        const dy = event.clientY - initialY;
        initialX = event.clientX;
        initialY = event.clientY;

        const offsetX = parseInt(shape.style.left || 0) + dx;
        const offsetY = parseInt(shape.style.top || 0) + dy;

        shape.style.left = `${offsetX}px`;
        shape.style.top = `${offsetY}px`;
    }

    shape.addEventListener('mousedown', (e) => {
        e.preventDefault();

        initialX = e.clientX;
        initialY = e.clientY;

        document.addEventListener('mousemove', moveShape);
        document.addEventListener('mouseup', stopMoving);
    });

    function stopMoving() {
        document.removeEventListener('mousemove', moveShape);
        document.removeEventListener('mouseup', stopMoving);
    }
}